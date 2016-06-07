/**
 * \file MuonDecay.h
 *
 * \ingroup Muon
 * 
 * \brief Class def header for a class MuonDecay
 *
 * @author vgenty
 */

/** \addtogroup Muon

    @{*/

#ifndef LARLITE_MUONDECAY_H
#define LARLITE_MUONDECAY_H

#include "Analysis/ana_base.h"

//this if for shower type particles!
#include "DataFormat/mcshower.h"

//we need historgram
#include "TH1D.h"


namespace larlite {
  /**
     \class MuonDecay
     User custom analysis class made by SHELL_USER_NAME
   */
  class MuonDecay : public ana_base{
  
  public:

    /// Default constructor
    MuonDecay(){ _name="MuonDecay"; _fout=0;}

    /// Default destructor
    virtual ~MuonDecay(){}

    /** IMPLEMENT in MuonDecay.cc!
        Initialization method to be called before the analysis event loop.
    */ 
    virtual bool initialize();

    /** IMPLEMENT in MuonDecay.cc! 
        Analyze a data event-by-event  
    */
    virtual bool analyze(storage_manager* storage);

    /** IMPLEMENT in MuonDecay.cc! 
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

  protected:
    
    TH1D* _electron_E;
    
  };
}
#endif

//**************************************************************************
// 
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group 

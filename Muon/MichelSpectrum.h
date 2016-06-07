/**
 * \file MichelSpectrum.h
 *
 * \ingroup Muon
 * 
 * \brief Class def header for a class MichelSpectrum
 *
 * @author vgenty
 */

/** \addtogroup Muon

    @{*/

#ifndef LARLITE_MICHELSPECTRUM_H
#define LARLITE_MICHELSPECTRUM_H

#include "Analysis/ana_base.h"

// dataformat is where the classes are
//-->mctrack is the class we are requesting out of the datafile
//-->so we have to tell our program what information is inside mctrack
#include "DataFormat/mctrack.h"

//where is TH1D?, it's here
#include "TH1D.h"

namespace larlite {
  /**
     \class MichelSpectrum
     User custom analysis class made by SHELL_USER_NAME
   */
  class MichelSpectrum : public ana_base{
  
  public:

    /// Default constructor
    MichelSpectrum(){ _name="MichelSpectrum"; _fout=0;}

    /// Default destructor
    virtual ~MichelSpectrum(){}

    /** IMPLEMENT in MichelSpectrum.cc!
        Initialization method to be called before the analysis event loop.
    */ 
    virtual bool initialize();

    /** IMPLEMENT in MichelSpectrum.cc! 
        Analyze a data event-by-event  
    */
    virtual bool analyze(storage_manager* storage);

    /** IMPLEMENT in MichelSpectrum.cc! 
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

  private:
    int _event_counter;
    TH1D * _muon_E;
    
    
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

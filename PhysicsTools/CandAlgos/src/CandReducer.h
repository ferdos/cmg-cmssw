#ifndef CandAlgos_CandReducer_h
#define CandAlgos_CandReducer_h
/** \class cand::modules::CandReducer
 *
 * Given a collectin of candidates, produced a
 * collection of LeafCandidas identical to the
 * source collection, but removing all daughters
 * and all components. 
 *
 * This is ment to produce a "light" collection
 * of candiadates just containing kimenatics 
 * information for very fast analysis purpose
 *
 * \author Luca Lista, INFN
 *
 * \version $Revision: 1.4 $
 *
 * $Id: CandReducer.h,v 1.4 2006/04/27 05:50:17 llista Exp $
 *
 */
#include "FWCore/Framework/interface/EDProducer.h"

class CandReducer : public edm::EDProducer {
public:
  /// constructor from parameter set
  explicit CandReducer( const edm::ParameterSet& );
  /// destructor
  ~CandReducer();
private:
  /// process one evevnt
  void produce( edm::Event& evt, const edm::EventSetup& );
  /// label of source candidate collection
  std::string src_;
};

#endif

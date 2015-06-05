#pragma once

#include "UHH2/core/include/fwd.h"
#include "UHH2/core/include/Selection.h"

namespace uhh2examples {
    
/* Select events with at least two jets in which the leading two jets have deltaphi > 2.7 and the third jet pt is
 * below 20% of the average of the leading two jets, where the minimum deltaphi and
 * maximum third jet pt fraction can be changed in the constructor.
 * The jets are assumed to be sorted in pt.
 */

  class DijetSelection: public uhh2::Selection {
  public:
    DijetSelection(float dphi_min = 2.7f, float third_frac_max = 0.2f);
    virtual bool passes(const uhh2::Event & event) override;
  private:
    float dphi_min, third_frac_max;
  };
  
  class HtSelection: public uhh2::Selection {
  public:
    explicit HtSelection(double ht_min=0., double ht_max=-1);
    virtual bool passes(const uhh2::Event & event);
  private:
    double ht_min, ht_max;
  };

  class InvMass2MuVeto: public uhh2::Selection {
  public:
    explicit InvMass2MuVeto(double m_min = 81., double m_max = 101.);
    virtual bool passes(const uhh2::Event & event);
  private:
    double m_min, m_max;
  };

  class PtLeadingMuonSelection: public uhh2::Selection {
  public:
    explicit PtLeadingMuonSelection(double pt_min = 30., double m_max = -1);
    virtual bool passes(const uhh2::Event & event);
  private:
    double pt_min, pt_max;
  };

  class Pt2ndMuonSelection: public uhh2::Selection {
  public:
    explicit Pt2ndMuonSelection(double pt_min = 30., double m_max = -1);
    virtual bool passes(const uhh2::Event & event);
  private:
    double pt_min, pt_max;
  };

  class PtLeadingJetSelection: public uhh2::Selection {
  public:
    explicit PtLeadingJetSelection(double pt_min = 30., double m_max = -1);
    virtual bool passes(const uhh2::Event & event);
  private:
    double pt_min, pt_max;
  };

  class Pt2ndJetSelection: public uhh2::Selection {
  public:
    explicit Pt2ndJetSelection(double pt_min = 30., double m_max = -1);
    virtual bool passes(const uhh2::Event & event);
  private:
    double pt_min, pt_max;
  };

}

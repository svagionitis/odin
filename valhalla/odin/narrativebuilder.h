#ifndef VALHALLA_ODIN_NARRATIVEBUILDER_H_
#define VALHALLA_ODIN_NARRATIVEBUILDER_H_

#include <vector>

#include <valhalla/proto/trippath.pb.h>
#include <valhalla/proto/directions_options.pb.h>

#include <valhalla/odin/maneuver.h>

namespace valhalla {
namespace odin {

class NarrativeBuilder {
 public:

  static void Build(const DirectionsOptions& directions_options,
                    std::list<Maneuver>& maneuvers);

 protected:
  NarrativeBuilder();

  static void FormStartInstruction(Maneuver& maneuver);

  static void FormDestinationInstruction(Maneuver& maneuver);

  static void FormContinueInstruction(Maneuver& maneuver);

  static void FormTurnInstruction(Maneuver& maneuver);

  static void FormBearInstruction(Maneuver& maneuver);

  static void FormUturnInstruction(Maneuver& maneuver);

  static void FormRampStraightInstruction(Maneuver& maneuver);

  static void FormRampRightInstruction(Maneuver& maneuver);

  static void FormRampLeftInstruction(Maneuver& maneuver);

  static void FormExitRightInstruction(Maneuver& maneuver);

  static void FormExitLeftInstruction(Maneuver& maneuver);

  static void FormStayInstruction(Maneuver& maneuver);

  static void FormMergeInstruction(Maneuver& maneuver);

  static void FormEnterRoundaboutInstruction(Maneuver& maneuver);

  static void FormExitRoundaboutInstruction(Maneuver& maneuver);

  static void FormEnterFerryInstruction(Maneuver& maneuver);

  static void FormExitFerryInstruction(Maneuver& maneuver);

  static void FormTransitConnectionStartInstruction(Maneuver& maneuver);

  static void FormTransitConnectionTransferInstruction(Maneuver& maneuver);

  static void FormTransitConnectionDestinationInstruction(Maneuver& maneuver);

  static void FormTransitInstruction(Maneuver& maneuver);

  static void FormTransitRemainOnInstruction(Maneuver& maneuver);

  static void FormTransitTransferInstruction(Maneuver& maneuver);

  static void FormPostTransitConnectionDestinationInstruction(Maneuver& maneuver);

  static std::string FormCardinalDirection(
      TripDirections_Maneuver_CardinalDirection cardinal_direction);

  static std::string FormTurnTypeInstruction(TripDirections_Maneuver_Type type);

  static std::string FormBearTypeInstruction(TripDirections_Maneuver_Type type);

  static std::string FormOrdinalValue(uint32_t value);

};

}
}

#endif  // VALHALLA_ODIN_NARRATIVEBUILDER_H_

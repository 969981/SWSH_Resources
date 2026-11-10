/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075a430; name: FUN_0075a430
 */


void FUN_0075a430(long param_1)

{
  VibrationModulation *pVVar1;
  
  if (*(int *)(param_1 + 100) != 2) {
    pVVar1 = (VibrationModulation *)nn::hid::VibrationNodeConnection::GetDestination();
    nn::hid::VibrationNode::SetModulationTo((VibrationNode *)(param_1 + 0x68),pVVar1);
    if (*(int *)(param_1 + 100) == 1) {
      return;
    }
  }
  pVVar1 = (VibrationModulation *)nn::hid::VibrationNodeConnection::GetDestination();
  nn::hid::VibrationNode::SetModulationTo((VibrationNode *)(param_1 + 0x68),pVVar1);
  return;
}



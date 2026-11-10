/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010288c0; name: FUN_010288c0
 */


void FUN_010288c0(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x2d0))(param_1 + 0x2f0);
  while ((uVar1 & 1) != 0) {
    nn::os::SleepThread(&LAB_00f42400);
    uVar1 = (**(code **)(param_1 + 0x2d0))(param_1 + 0x2f0);
  }
  nn::oe::LeaveExitRequestHandlingSection();
  do {
    nn::os::SleepThread(&LAB_00f42400);
  } while( true );
}



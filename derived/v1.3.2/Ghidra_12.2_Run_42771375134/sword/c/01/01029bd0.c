/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029bd0; name: FUN_01029bd0
 */


void FUN_01029bd0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  uVar1 = nn::time::IsInitialized();
  if ((uVar1 & 1) == 0) {
    nn::time::Initialize();
  }
  local_18 = FUN_006c5800();
  uVar2 = FUN_006c5880(&local_18);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



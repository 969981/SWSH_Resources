/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc23d0; name: FUN_00dc23d0
 */


void FUN_00dc23d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong local_28;
  
  uVar1 = *param_2;
  local_28 = FUN_0069d1d0(uVar1,*param_1);
  if ((local_28 & 0xff) != 0) {
    FUN_0069d200(uVar1,&local_28,*(undefined1 *)param_1[1]);
  }
  return;
}



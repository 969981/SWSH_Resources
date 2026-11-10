/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029c20; name: FUN_01029c20
 */


void FUN_01029c20(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar1 = *(int *)(param_1 + 0x5c) + 1;
    *(int *)(param_1 + 0x5c) = iVar1;
    if ((*(int *)(param_1 + 0x60) <= iVar1) || ((param_2 & 1) != 0)) {
      local_18 = FUN_006c5800();
      uVar2 = FUN_006c5880(&local_18);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return;
    }
  }
  return;
}



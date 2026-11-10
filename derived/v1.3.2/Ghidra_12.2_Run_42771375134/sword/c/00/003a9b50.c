/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9b50; name: FUN_003a9b50
 */


void FUN_003a9b50(long *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  if (*param_1 == 0) {
    *(ushort *)((long)param_1 + 0x4c) = uVar1;
    return;
  }
  if ((uVar1 & 99) == 0) {
    *(ushort *)((long)param_1 + 0x4c) = uVar1;
    FUN_003aa7c0();
    return;
  }
  uVar2 = *(undefined8 *)(*param_1 + 0x48);
  FUN_003ea030(uVar2,param_1,0);
  *(ushort *)((long)param_1 + 0x4c) = *param_2;
  FUN_003e9f20(uVar2,param_1);
  FUN_003aa7c0(*param_1,*param_2);
  return;
}



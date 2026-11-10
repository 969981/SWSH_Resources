/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138f830; name: FUN_0138f830
 */


void FUN_0138f830(long param_1,void *param_2)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  __dest = (void *)(param_1 + 0x110);
  memcpy(__dest,param_2,0x2a4);
  iVar1 = FUN_0132a1f0(__dest);
  if (iVar1 < 2) {
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    return;
  }
  uVar3 = FUN_0120e640(*(undefined8 *)PTR_DAT_027185f8);
  uVar2 = FUN_0132a4a0(__dest,uVar3);
  *(undefined4 *)(param_1 + 0x3c0) = uVar2;
  return;
}



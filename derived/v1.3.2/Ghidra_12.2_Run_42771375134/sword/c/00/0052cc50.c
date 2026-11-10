/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052cc50; name: FUN_0052cc50
 */


undefined8 FUN_0052cc50(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(char *)(param_1 + 0x1051) == '\0') && (*(long *)(param_1 + 0x50) == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1053) != '\0') {
    return 0;
  }
  bVar1 = *(char *)(*(long *)(param_1 + 0x18) + 0x14efa) == '\0';
  if (bVar1) {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
  }
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 2;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined4 *)(param_1 + 0x94);
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    uVar4 = *(undefined4 *)(param_1 + 0x90);
  }
  FUN_0052cd40(uVar6,param_1,0xffffffff,0,0,0,!bVar1,uVar2,uVar3,uVar4,uVar5);
  return 0;
}



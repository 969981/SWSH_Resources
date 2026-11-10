/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e85210; name: FUN_00e85210
 */


undefined4
FUN_00e85210(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ushort uVar7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  *(undefined1 *)(param_9 + 0x46) = 1;
  iVar1 = *(int *)(param_9 + 0x20);
  iVar2 = *(int *)(param_9 + 0x30);
  iVar3 = *(int *)(param_9 + 0x28);
  FUN_00dae220(in_stack_00000008,0,param_9,0x18);
  FUN_00dae220(in_stack_00000000,0,param_9,0x16);
  FUN_00dae220(param_8,0,param_9,0x14);
  FUN_00dae220(param_7,0,param_9,0x12);
  FUN_00dae220(param_6,0,param_9,0x10);
  FUN_00dae220(param_5,0,param_9,0xe);
  FUN_00dae220(param_4,0,param_9,0xc);
  FUN_00dae220(param_3,0,param_9,10);
  FUN_00dae220(param_2,0,param_9,8);
  FUN_00dae220(param_1,0,param_9,6);
  if ((param_10 != 0) || (*(char *)(param_9 + 0x50) != '\0')) {
    uVar5 = FUN_00daec30(param_9,param_10);
    puVar6 = *(ulong **)(param_9 + 0x38);
    if ((ulong)(*(long *)(param_9 + 0x30) - (long)puVar6) < 8) {
      FUN_00dae400(param_9,8);
      puVar6 = *(ulong **)(param_9 + 0x38);
    }
    *puVar6 = uVar5 & 0xffffffff | 0x400000000;
    *(long *)(param_9 + 0x38) = *(long *)(param_9 + 0x38) + 8;
    uVar7 = *(ushort *)(param_9 + 0x44);
    *(int *)(param_9 + 0x40) = *(int *)(param_9 + 0x40) + 1;
    if (uVar7 < 5) {
      uVar7 = 4;
    }
    *(ushort *)(param_9 + 0x44) = uVar7;
  }
  uVar4 = FUN_00dae710(param_9,(iVar1 - iVar2) + iVar3);
  return uVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041d9d0; name: FUN_0041d9d0
 */


bool FUN_0041d9d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int param_5,
                 long *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar10;
  undefined8 local_80;
  undefined1 local_78;
  long local_68;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  local_78 = 0;
  local_80 = 0x400000000;
  lVar7 = *(long *)(param_3 + 0x18);
  lVar3 = FUN_004148d0(*(undefined8 *)(param_2 + 0x80),*(undefined4 *)(lVar7 + 4));
  if (lVar3 == 0) {
    iVar1 = 2;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    if ((*(uint *)(lVar3 + 0x18) & 0xffff0000) == 0x100000) {
      lVar6 = *(long *)(*(long *)(lVar8 + 0x10) + 0x60);
      uVar9 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_0041a230(lVar8);
      uVar5 = FUN_0041a240(lVar8);
      iVar1 = FUN_004e1650(lVar6 + 0x58,param_2,uVar9,lVar3,uVar4,&local_80,uVar5,lVar7,
                           *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                           CONCAT44(uVar10,param_5),&local_68);
      lVar3 = local_68 + 0x58;
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_0041a230(lVar8);
      uVar5 = FUN_0041a240(lVar8);
      uVar2 = FUN_0041a250(lVar8);
      iVar1 = FUN_00405de0(param_1,param_2,uVar9,lVar3,uVar4,&local_80,uVar5,uVar2 & 1,lVar7,
                           *(undefined4 *)(param_3 + 0x24),*(int *)(param_3 + 0x28) + param_5,
                           &local_68);
      lVar3 = local_68 + 0x2c0;
    }
    lVar7 = 0;
    if (local_68 != 0) {
      lVar7 = lVar3;
    }
    *param_6 = lVar7;
  }
  return iVar1 == 1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d5960; name: FUN_010d5960
 */


void FUN_010d5960(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_010d5ed0(param_1,1,*(undefined8 *)(&DAT_01d4b970 + (long)*param_2 * 8),0xd0ceea805103dd50);
  if (param_2[1] == 3) {
    if (*(long *)(param_2 + 2) == 0) goto LAB_010d5a4c;
    FUN_014c7a10(lVar4,0,*(long *)(param_2 + 2),0,0);
    uVar3 = 0xcfa6d07f00d1f26b;
  }
  else {
    uVar3 = *(undefined8 *)(&DAT_02163f30 + (long)param_2[1] * 8);
  }
  FUN_010d5ed0(param_1,1,uVar3,0xd0c4618050faa000);
LAB_010d5a4c:
  iVar1 = param_2[4];
  iVar2 = param_2[5];
  FUN_014ca220(lVar4,0,iVar1,1,0,1);
  if (iVar1 == iVar2) {
    uVar3 = 0xcfa6cf7f00d1f0b8;
  }
  else {
    FUN_014ca220(lVar4,1,param_2[5],1,0,1);
    uVar3 = 0xcf9fe07f00cbeeed;
  }
  FUN_010d5ed0(param_1,1,uVar3,0xd0c4638050faa366);
  iVar1 = param_2[6];
  FUN_014ca220(lVar4,0,param_2[7],3,0,1);
  FUN_010d5ed0(param_1,1,*(undefined8 *)(&DAT_02163f48 + (long)iVar1 * 8),0xd0c4658050faa6cc);
  FUN_010d5ed0(param_1,1,*(undefined8 *)(&DAT_01d4b870 + ((ulong)*(byte *)(param_2 + 8) ^ 1) * 8),
               0xd0c4678050faaa32);
  FUN_010d5ed0(param_1,1,
               *(undefined8 *)(&DAT_01d4b870 + ((ulong)*(byte *)((long)param_2 + 0x21) ^ 1) * 8),
               0xd0c4698050faad98);
  FUN_010d5ed0(param_1,1,
               *(undefined8 *)(&DAT_01d4b880 + ((ulong)*(byte *)((long)param_2 + 0x22) ^ 1) * 8),
               0xd0c7e78050fdb989);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010d5bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}



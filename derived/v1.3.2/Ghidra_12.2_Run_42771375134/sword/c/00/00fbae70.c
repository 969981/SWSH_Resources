/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbae70; name: FUN_00fbae70
 */


long FUN_00fbae70(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  
  uVar4 = FUN_00e84680(0,0,0,0,0,0,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x78),0,0,
                       param_2[2]);
  uVar5 = FUN_00e85210(0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x78),0);
  uVar9 = 0;
  uVar6 = FUN_00e85210(0,0,0,*(undefined4 *)(param_2 + 3),0,0,0,0,*(undefined8 *)(param_1 + 0x78),1)
  ;
  uVar4 = FUN_00e853e0(*(undefined8 *)(param_1 + 0x78),uVar4,*param_2,param_2[1],0,uVar6,0,0,uVar5,
                       uVar9);
  lVar8 = *(long *)(param_1 + 0x78);
  iVar1 = *(int *)(lVar8 + 0x20);
  iVar2 = *(int *)(lVar8 + 0x30);
  iVar3 = *(int *)(lVar8 + 0x28);
  *(undefined1 *)(lVar8 + 0x46) = 1;
  FUN_00e863b0(lVar8,4,uVar4);
  uVar7 = FUN_00dae710(lVar8,(iVar1 - iVar2) + iVar3);
  lVar8 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar8 + 0x30) +
         (ulong)(uint)((*(int *)(lVar8 + 0x20) - (int)*(long *)(lVar8 + 0x30)) +
                      *(int *)(lVar8 + 0x28))) - (uVar7 & 0xffffffff);
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e832d0; name: FUN_00e832d0
 */


long FUN_00e832d0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  uVar4 = FUN_00e84680(0,0,0,0,0,0,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x78),0,
                       param_2[3],param_2[2]);
  uVar5 = FUN_00e85210(0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x78),0);
  uVar9 = 0;
  uVar6 = FUN_00e85210(0,0,0,*(undefined4 *)(param_2 + 4),0,0,0,0,*(undefined8 *)(param_1 + 0x78),1)
  ;
  uVar4 = FUN_00e853e0(*(undefined8 *)(param_1 + 0x78),uVar4,*param_2,param_2[1],0,uVar6,0,0,uVar5,
                       uVar9);
  lVar7 = *(long *)(param_1 + 0x78);
  iVar1 = *(int *)(lVar7 + 0x20);
  iVar2 = *(int *)(lVar7 + 0x30);
  iVar3 = *(int *)(lVar7 + 0x28);
  *(undefined1 *)(lVar7 + 0x46) = 1;
  FUN_00e863b0(lVar7,4,uVar4);
  uVar4 = FUN_00dae710(lVar7,(iVar1 - iVar2) + iVar3);
  uVar8 = 0xcbf29ce484222645;
  uVar5 = FUN_00e855a0(*(undefined8 *)(param_1 + 0x78),0,0,0,0,0xcbf29ce484222645,0,0,
                       0xcbf29ce484222645,0,0);
  uVar8 = FUN_00e85b80(0,*(undefined8 *)(param_1 + 0x78),uVar4,0,0xcbf29ce484222645,
                       0xcbf29ce484222645,0,0xcbf29ce484222645,*(undefined1 *)((long)param_2 + 0x24)
                       ,uVar8 & 0xffffffffffffff00,0,0,uVar5,0,0,0,0,0);
  lVar7 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar7 + 0x30) +
         (ulong)(uint)((*(int *)(lVar7 + 0x20) - (int)*(long *)(lVar7 + 0x30)) +
                      *(int *)(lVar7 + 0x28))) - (uVar8 & 0xffffffff);
}



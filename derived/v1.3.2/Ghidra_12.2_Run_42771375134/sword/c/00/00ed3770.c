/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed3770; name: FUN_00ed3770
 */


undefined8 FUN_00ed3770(long param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_4 - 1U < 4) {
    uVar8 = *(undefined8 *)(*(long *)PTR_DAT_0271bec8 + 200);
    uVar9 = *(undefined8 *)PTR_DAT_02720280;
    puVar3 = PTR_DAT_0271f730;
    switch(param_4) {
    case 1:
      puVar3 = PTR_DAT_0271f728;
      if (param_3 != 2) {
        puVar3 = PTR_DAT_0271f720;
      }
      break;
    case 3:
switchD_00ed37d0_caseD_3:
      puVar3 = PTR_DAT_0271f738;
      break;
    case 4:
      if ((param_2 != 1) ||
         (uVar5 = FUN_01002950(*(undefined8 *)PTR_DAT_027108d0,PTR_DAT_0271f730), (uVar5 & 1) != 0))
      goto switchD_00ed37d0_caseD_3;
      goto LAB_00ed38dc;
    }
    iVar2 = FUN_00ed4690(uVar9,puVar3,uVar8);
    puVar3 = PTR_DAT_0271f740;
    if (iVar2 == 2) {
      return 0;
    }
    if (param_4 - 2U < 2) {
      lVar4 = *(long *)PTR_DAT_027194d8;
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(*(long *)PTR_DAT_0271f740 + 0x68);
      FUN_008d4280(&local_40);
      *(undefined8 *)(lVar4 + 0x58) = local_40;
      *(undefined8 *)(lVar4 + 0x60) = uStack_38;
      lVar4 = *(long *)PTR_DAT_027194e0;
      uVar8 = *(undefined8 *)(*(long *)puVar3 + 0x88);
    }
    else if (param_4 == 4) {
LAB_00ed38dc:
      puVar3 = PTR_DAT_0271f740;
      lVar4 = *(long *)PTR_DAT_027194d8;
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(*(long *)PTR_DAT_0271f740 + 0x68);
      FUN_008d4280(&local_40);
      *(undefined8 *)(lVar4 + 0x58) = local_40;
      *(undefined8 *)(lVar4 + 0x60) = uStack_38;
      lVar4 = *(long *)PTR_DAT_027194e0;
      uVar8 = *(undefined8 *)(*(long *)puVar3 + 200);
    }
    else {
      if (param_4 != 1) goto LAB_00ed3924;
      lVar4 = *(long *)PTR_DAT_027194d8;
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(*(long *)PTR_DAT_0271f740 + 0x68);
      FUN_008d4280(&local_40);
      *(undefined8 *)(lVar4 + 0x58) = local_40;
      *(undefined8 *)(lVar4 + 0x60) = uStack_38;
      lVar4 = *(long *)PTR_DAT_027194e0;
      uVar8 = *(undefined8 *)(*(long *)puVar3 + 0xa8);
    }
    *(undefined8 *)(lVar4 + 0x50) = uVar8;
  }
LAB_00ed3924:
  bVar1 = *(byte *)(param_1 + 0xe0);
  if (bVar1 == 0) {
    lVar4 = *(long *)PTR_DAT_027194d8;
  }
  else {
    uVar5 = 0xcbf29ce484222645;
    pbVar7 = (byte *)(param_1 + 0xe1);
    do {
      uVar5 = (uVar5 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    lVar4 = *(long *)PTR_DAT_027194d8;
    if (uVar5 == 0x674edc539f9f74a6) {
      puVar6 = (undefined8 *)(*(long *)PTR_DAT_0271f740 + 0x68);
      goto LAB_00ed39b0;
    }
  }
  puVar6 = (undefined8 *)(*(long *)PTR_DAT_0271e860 + 0x48);
LAB_00ed39b0:
  *(undefined8 *)(lVar4 + 0x48) = *puVar6;
  return 1;
}



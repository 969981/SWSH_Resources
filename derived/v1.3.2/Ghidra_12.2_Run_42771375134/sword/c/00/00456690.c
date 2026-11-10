/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00456690; name: FUN_00456690
 */


int FUN_00456690(long *param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar8 = (byte *)*param_2;
  pbVar7 = pbVar8 + 1;
  bVar2 = *pbVar8;
  *param_2 = (long)pbVar7;
  if (bVar2 != 0) {
    bVar4 = pbVar8[1];
    pbVar8 = pbVar8 + 2;
    uVar9 = 1;
    *param_2 = (long)pbVar8;
    do {
      bVar3 = *pbVar8;
      *param_2 = (long)(pbVar8 + 1);
      iVar6 = *(int *)(pbVar8 + 1);
      *param_2 = (long)(pbVar8 + 5);
      bVar5 = pbVar8[5];
      *param_2 = (long)(pbVar8 + 7);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_004835d0(param_1,bVar3,iVar6,bVar5 != 0,0);
        if (iVar6 != 1) goto LAB_0045673c;
      }
      if (bVar2 <= uVar9) goto LAB_0045673c;
      pbVar8 = (byte *)*param_2;
      uVar9 = uVar9 + 1;
    } while( true );
  }
LAB_00456758:
  uVar1 = *(undefined4 *)pbVar7;
  *param_2 = (long)(pbVar7 + 4);
  bVar2 = pbVar7[4];
  *param_2 = (long)(pbVar7 + 5);
  iVar6 = (**(code **)(*param_1 + 0x1b8))(param_1,uVar1,bVar2 != 0,0);
LAB_00456790:
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | 0x1f000;
  return iVar6;
LAB_0045673c:
  FUN_004837f0(param_1,bVar4,0xffffffff);
  if (iVar6 != 1) goto LAB_00456790;
  pbVar7 = (byte *)*param_2;
  goto LAB_00456758;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00406a70; name: FUN_00406a70
 */


undefined4
FUN_00406a70(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_02712a90;
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x88);
  if (lVar5 != 0) {
    FUN_0040bcd0(lVar5,param_2,param_3,param_4,param_5 & 1);
    plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    if (plVar6 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x128))(plVar6,1);
      puVar2 = PTR_DAT_02712ab8;
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(PTR_DAT_02712ab8 + 8);
        *(long **)(PTR_DAT_02712ab8 + 8) = param_2;
        if (lVar8 == 0) {
          *(long **)puVar2 = param_2;
        }
        param_2[0xe] = lVar8;
        FUN_0040aea0(param_2,lVar5);
        puVar1 = PTR_DAT_02712ad0;
        if (*(int *)(param_3 + 0x14) == 0) {
          return 2;
        }
        local_44 = 0;
        uVar3 = FUN_0048fb90(*(undefined8 *)PTR_DAT_02712ad0,*(int *)(param_3 + 0x14),param_2 + 3,
                             &local_44);
        FUN_0040b0b0(param_2,local_44);
        if (((local_44._2_1_ >> 5 & 1) != 0) &&
           (iVar4 = FUN_0041b630(PTR_DAT_02712aa0,*(undefined4 *)(param_3 + 0x14)), iVar4 != 1)) {
          FUN_0040b0b0(param_2,local_44 & 0xffdfffff);
        }
        FUN_0048f220(*(undefined8 *)puVar1,*(undefined4 *)(param_3 + 0x14));
        return uVar3;
      }
      (**(code **)(*plVar6 + 0x130))(plVar6,1);
    }
    uVar3 = *(undefined4 *)puVar1;
    FUN_0040bda0(lVar5);
    FUN_00404870(uVar3,lVar5);
  }
  return 2;
}



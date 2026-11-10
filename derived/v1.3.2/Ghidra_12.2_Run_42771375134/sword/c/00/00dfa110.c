/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfa110; name: thunk_FUN_00dfa120
 */


void thunk_FUN_00dfa120(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  long *plStack_18;
  
  FUN_00a658b0(&plStack_18,param_1 + 0x50);
  if ((plStack_18 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plStack_18 + 0xf8))(), lVar3 = lStack_28, (uVar2 & 1) == 0)) {
    lVar3 = lStack_28;
    if (*(int *)(param_1 + 0xcb8) == 1) {
      iVar1 = *(int *)(param_1 + 0xcbc) + -1;
      if ((0 < *(int *)(param_1 + 0xcbc)) && (*(int *)(param_1 + 0xcbc) = iVar1, iVar1 == 0)) {
        FUN_00dfd190(param_1,0,1);
        lVar3 = *(long *)PTR_DAT_027107a8;
        uStack_58 = 0xf38cafa3a524257f;
        pcStack_50 = "Set_State_Off";
        uStack_48 = 0xd;
        FUN_006cf0a0(auStack_40,&uStack_58);
        FUN_008962c0(lVar3 + 0x108,auStack_40);
        lVar3 = 0;
        if (lStack_28 != 0) {
          (**(code **)(*(long *)(lStack_28 + 0x48) + 0x18))();
          lStack_28 = 0;
          lVar3 = lStack_28;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xcbc) = 0;
    }
  }
  lStack_28 = lVar3;
  if (plStack_18 != (long *)0x0) {
    (**(code **)(plStack_18[9] + 0x18))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007bda70; name: FUN_007bda70
 */


void FUN_007bda70(long param_1,long *param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int local_70 [4];
  long local_60;
  long lStack_58;
  long local_50;
  byte local_48;
  undefined2 local_47;
  undefined1 local_45;
  uint local_44;
  
  lVar6 = *(long *)PTR_DAT_02716a30;
  if ((((lVar6 != 0) && (*(long *)PTR_DAT_02716710 != 0)) &&
      (plVar1 = (long *)FUN_01962a40(), plVar1 != (long *)0x0)) &&
     (lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,*param_2), lVar2 != 0)) {
    FUN_018c4570(local_70,lVar2,&local_60);
    local_50 = lStack_58;
    if ((local_70[0] == 0) && (local_60 != 0 || lStack_58 != 0)) {
      plVar1 = *(long **)(param_1 + 0x130);
      plVar3 = *(long **)(param_1 + 0x138);
      if ((plVar1 != plVar3) && (*plVar1 != *param_2)) {
        do {
          plVar1 = plVar1 + 4;
          if (plVar3 == plVar1) goto LAB_007bdb30;
        } while (*plVar1 != *param_2);
      }
      if (plVar1 == plVar3) {
LAB_007bdb30:
        if (*(long *)(param_1 + 0x168) != 0) {
          FUN_007ce600(*(long *)(param_1 + 0x168),param_2);
        }
        lVar2 = *param_2;
        if (*(long *)(lVar6 + 0xf0) == lVar2) {
          local_45 = false;
        }
        else {
          plVar1 = *(long **)(param_1 + 0x110);
          lVar6 = *(long *)(param_1 + 0x118);
          plVar3 = plVar1;
          if (lVar6 != 0) {
            lVar4 = lVar6 << 4;
            do {
              if ((*plVar3 == local_60) && (plVar3[1] == lStack_58)) goto LAB_007bdb98;
              lVar4 = lVar4 + -0x10;
              plVar3 = plVar3 + 2;
            } while (lVar4 != 0);
            plVar3 = plVar1 + lVar6 * 2;
          }
LAB_007bdb98:
          local_45 = plVar1 + lVar6 * 2 != plVar3;
        }
        local_48 = param_3 & 1;
        lStack_58 = local_60;
        local_47 = 0;
        local_44 = local_44 & 0xffffff00;
        plVar1 = *(long **)(param_1 + 0x138);
        local_60 = lVar2;
        if (plVar1 < *(long **)(param_1 + 0x140)) {
          uVar5 = *(undefined8 *)(param_1 + 0x148);
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar5;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar1[2] = local_50;
          plVar1[3] = CONCAT44(local_44,CONCAT13(local_45,CONCAT21(local_47,local_48)));
          *plVar1 = local_60;
          plVar1[1] = lStack_58;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 0x20;
        }
        else {
          FUN_007bf1b0(param_1 + 0x130,&local_60);
        }
      }
    }
  }
  return;
}



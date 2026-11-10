/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012103a0; name: FUN_012103a0
 */


void FUN_012103a0(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined1 auStack_c0 [40];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  
  if (*(char *)(param_4 + 0x120) == '\0') {
    puVar7 = (undefined4 *)0x0;
    goto LAB_0121047c;
  }
  local_90 = *(undefined8 *)(param_4 + 0x128);
  local_88 = *(undefined8 *)(param_4 + 0x130);
  uStack_80 = *(undefined8 *)(param_4 + 0x138);
  local_78 = *(undefined8 *)(param_4 + 0x140);
  uStack_70 = *(undefined8 *)(param_4 + 0x148);
  local_98 = 1;
  local_64 = param_3;
  if ((*(char *)(param_2 + 0x5a0) == '\0') &&
     (thunk_FUN_011f3570(auStack_c0), *(char *)(param_2 + 0x5a0) == '\0')) {
    *(undefined1 *)(param_2 + 0x5a0) = 1;
  }
  uVar2 = FUN_0121aff0(&local_90);
  uVar3 = FUN_011f4020(param_2 + 0x5a1,uVar2);
  if ((uVar3 & 1) == 0) {
    FUN_0121ae00(auStack_c0);
    uVar3 = FUN_0121b130(&local_90,auStack_c0);
    if ((uVar3 & 1) != 0) goto LAB_01210458;
    puVar10 = *(undefined4 **)(param_2 + 0xa0);
    if (*(long *)(param_2 + 0xa8) == 0) {
      uVar3 = 0;
      puVar9 = puVar10;
    }
    else {
      puVar7 = puVar10 + *(long *)(param_2 + 0xa8) * 0x98;
      do {
        uVar2 = FUN_01225e50(puVar10);
        uVar3 = FUN_0121b130(uVar2,&local_90);
        if ((uVar3 & 1) != 0) goto LAB_012104d4;
        puVar10 = puVar10 + 0x98;
      } while (puVar10 != puVar7);
      puVar10 = puVar7;
LAB_012104d4:
      uVar3 = *(ulong *)(param_2 + 0xa8);
      puVar9 = *(undefined4 **)(param_2 + 0xa0);
    }
    puVar7 = (undefined4 *)0x0;
    if (puVar9 + uVar3 * 0x98 != puVar10) {
      puVar7 = puVar10;
    }
    if (puVar7 == (undefined4 *)0x0) {
      if (uVar3 < *(ulong *)(param_2 + 0x50)) {
        FUN_01215c70(param_2 + 0x60,&local_64,param_4);
        puVar8 = (undefined4 *)
                 (*(long *)(param_2 + 0xa0) + *(long *)(param_2 + 0xa8) * 0x260 + -0x260);
LAB_012105f8:
        FUN_01218ec0(param_2 + 0xc0,&local_90);
        bVar1 = false;
        puVar7 = puVar8;
      }
      else {
        if (uVar3 != 0) {
          lVar11 = uVar3 * 0x260;
          puVar8 = (undefined4 *)0x0;
          puVar10 = (undefined4 *)0x0;
          do {
            if (puVar10 == (undefined4 *)0x0) {
LAB_012105a4:
              piVar6 = (int *)FUN_01225f00(puVar9);
              if (*piVar6 != 1) {
                puVar10 = puVar9;
                puVar8 = puVar9;
              }
            }
            else {
              plVar4 = (long *)FUN_01225ef0(puVar9);
              plVar5 = (long *)FUN_01225ef0(puVar10);
              if (*plVar4 < *plVar5) goto LAB_012105a4;
            }
            puVar9 = puVar9 + 0x98;
            lVar11 = lVar11 + -0x260;
          } while (lVar11 != 0);
          if (puVar8 != (undefined4 *)0x0) {
            uVar2 = FUN_01225e50(puVar8);
            FUN_01218f90(param_2 + 0xc0,uVar2);
            FUN_01215db0(puVar8,local_64,param_4);
            goto LAB_012105f8;
          }
        }
        FUN_0121b1a0("not registered becaouse there is no delete target",&local_90);
        bVar1 = false;
      }
    }
    else {
      *puVar7 = local_64;
      uVar3 = FUN_01216240(puVar7 + 4,param_4);
      if ((uVar3 & 1) != 0) {
        FUN_01225e20(puVar7);
        FUN_01218d90(param_2 + 0xc0,&local_90);
      }
      bVar1 = false;
    }
  }
  else {
LAB_01210458:
    *param_1 = 0;
    bVar1 = true;
    puVar7 = (undefined4 *)0x0;
  }
  if (bVar1) {
    return;
  }
LAB_0121047c:
  *param_1 = (long)puVar7;
  return;
}



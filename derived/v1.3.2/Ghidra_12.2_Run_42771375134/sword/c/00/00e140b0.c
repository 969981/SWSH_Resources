/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e140b0; name: FUN_00e140b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e140b0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)0x0;
  puVar6 = *(undefined8 **)(param_1 + 0x148);
  if (puVar6 != *(undefined8 **)(param_1 + 0x150)) {
    local_28 = (undefined8 *)*puVar6;
  }
  *(undefined8 **)(param_1 + 0x150) = puVar6;
  puStack_a8 = &uStack_40;
  local_a0 = &local_50;
  local_d0 = (undefined8 *)&LAB_00e2fa70;
  local_c8 = FUN_00e2fb40;
  fVar7 = (float)*param_2;
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  uStack_40 = CONCAT44(fVar8 + (float)((ulong)_DAT_01d4b600 >> 0x20),fVar7 + (float)_DAT_01d4b600);
  fVar9 = (float)param_2[1];
  fVar10 = (float)((ulong)param_2[1] >> 0x20);
  uStack_38 = CONCAT44(fVar10 + (float)((ulong)_UNK_01d4b608 >> 0x20),fVar9 + (float)_UNK_01d4b608);
  local_50 = CONCAT44(fVar8 + (float)((ulong)_DAT_01d4a890 >> 0x20),fVar7 + (float)_DAT_01d4a890);
  uStack_48 = CONCAT44(fVar10 + (float)((ulong)_UNK_01d4a898 >> 0x20),fVar9 + (float)_UNK_01d4a898);
  local_c0 = &LAB_00e2fb50;
  local_b8 = &LAB_00e2fb70;
  local_b0 = param_1;
  FUN_00e193e0(param_1,&local_d0);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(&local_b0);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x148);
  if (puVar6 == *(undefined8 **)(param_1 + 0x150)) {
    if (local_28 != (undefined8 *)0x0) {
      if (puVar6 == *(undefined8 **)(param_1 + 0x158)) {
        FUN_00e2f8b0(param_1 + 0x148,&local_28);
        iVar2 = *(int *)(param_1 + 0x358);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x160);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00e1435c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
LAB_00e141e0:
        *puVar6 = local_28;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 8;
        iVar2 = *(int *)(param_1 + 0x358);
      }
      goto joined_r0x00e1430c;
    }
    if (*(long **)(param_1 + 0x210) != *(long **)(param_1 + 0x218)) {
      lVar4 = **(long **)(param_1 + 0x210);
      if ((lVar4 != 0) && (puVar6 = *(undefined8 **)(lVar4 + 0x60), puVar6 != (undefined8 *)0x0)) {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        if (((*PTR_DAT_0271ef90 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_0271ef90), iVar2 != 0)) {
          uVar5 = FUN_00e1ca40();
          *(undefined8 *)PTR_DAT_0271ef98 = uVar5;
          __cxa_guard_release(PTR_DAT_0271ef90);
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)PTR_DAT_0271ef98) {
            local_d0 = puVar6 + -10;
            puVar6 = *(undefined8 **)(param_1 + 0x150);
            if (puVar6 == *(undefined8 **)(param_1 + 0x158)) {
              FUN_00e2f8b0(param_1 + 0x148,&local_d0);
              iVar2 = *(int *)(param_1 + 0x358);
              goto joined_r0x00e1430c;
            }
            uVar5 = *(undefined8 *)(param_1 + 0x160);
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00e1435c;
            *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            local_28 = local_d0;
            goto LAB_00e141e0;
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x358);
      goto joined_r0x00e1430c;
    }
  }
  iVar2 = *(int *)(param_1 + 0x358);
joined_r0x00e1430c:
  if (((iVar2 == 0) && (*(long **)(param_1 + 0x148) != *(long **)(param_1 + 0x150))) &&
     (lVar4 = **(long **)(param_1 + 0x148), lVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(lVar4 + 0x650);
    *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(lVar4 + 0x658);
  }
  return;
}



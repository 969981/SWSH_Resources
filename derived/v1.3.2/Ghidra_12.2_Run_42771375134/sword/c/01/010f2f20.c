/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f2f20; name: FUN_010f2f20
 */


void FUN_010f2f20(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long local_58;
  
  plVar6 = *(long **)(param_1 + 8);
  puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_010f3148:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar2[4] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[2] = 0;
  puVar2[3] = plVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar7 = *(undefined8 **)(param_1 + 0xa0);
  *(undefined8 **)(param_1 + 0xa0) = puVar2;
  if (puVar7 != (undefined8 *)0x0) {
    plVar8 = (long *)*puVar7;
    if (plVar8 != (long *)0x0) {
      if ((long *)puVar7[1] == plVar8) {
        plVar5 = plVar8;
      }
      else {
        plVar5 = (long *)puVar7[1];
        do {
          plVar9 = plVar5 + -1;
          if (*plVar9 != 0) {
            (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
            plVar5[-1] = 0;
          }
          plVar5 = plVar9;
        } while (plVar8 != plVar9);
        plVar5 = (long *)*puVar7;
      }
      puVar7[1] = plVar8;
      (**(code **)(*(long *)puVar7[3] + 0x18))((long *)puVar7[3],plVar5,puVar7[2] - (long)plVar5,8);
    }
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),puVar7,*(undefined8 *)(param_1 + 0xb0),
               *(undefined8 *)(param_1 + 0xb8));
  }
  *(long **)(param_1 + 0xa8) = plVar6;
  *(undefined8 *)(param_1 + 0xb0) = 0x30;
  plVar6 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = 8;
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)*plVar6;
    plVar6 = (long *)plVar6[1];
    if (plVar8 != plVar6) {
      do {
        local_58 = *plVar8;
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
        if (*(uint *)(local_58 + 0xe0) == (param_2 & 0xffff)) {
          lVar3 = *(long *)(param_1 + 0xa0);
          plVar5 = *(long **)(lVar3 + 8);
          if (plVar5 == *(long **)(lVar3 + 0x10)) {
            FUN_010f3fa0(lVar3,&local_58);
          }
          else {
            uVar10 = *(undefined8 *)(lVar3 + 0x18);
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_010f3148;
            *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            *plVar5 = local_58;
            if (local_58 != 0) {
              (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
            }
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 8;
          }
        }
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        plVar8 = plVar8 + 1;
      } while (plVar6 != plVar8);
    }
  }
  return;
}



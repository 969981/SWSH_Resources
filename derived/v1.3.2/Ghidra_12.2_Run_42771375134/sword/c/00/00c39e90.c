/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c39e90; name: FUN_00c39e90
 */


void FUN_00c39e90(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_58;
  long local_48;
  
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00c1cc60(&local_48,puVar8 + -10);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          FUN_011ffb60(&local_58,*(undefined8 *)PTR_DAT_02718f20);
          if (local_58 != 0) {
            lVar5 = *(long *)(local_58 + 8);
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            }
            if ((*(long *)(param_2 + 0x68) == 0) ||
               (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60),
               puVar8 == (undefined8 *)0x0)) goto joined_r0x00c39f94;
            plVar4 = (long *)(**(code **)*puVar8)(puVar8);
            lVar6 = FUN_00be66c0();
            goto joined_r0x00c39f78;
          }
        }
        break;
      }
    }
  }
  goto LAB_00c39fb8;
joined_r0x00c39f78:
  if (plVar4 == (long *)0x0) goto joined_r0x00c39f94;
  if (plVar4 == (long *)lVar6) {
    FUN_00c1cce0(&local_48,puVar8 + -10);
    lVar6 = FUN_00be53f0(&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (((lVar6 != 0) && (lVar5 != 0)) && (plVar4 = *(long **)(lVar6 + 8), plVar4 != (long *)0x0)) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar4;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_0077d050(lVar7,0xd);
      *(long **)(lVar7 + 8) = plVar4;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x80;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      *param_1 = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      FUN_01524b90(lVar5,lVar7);
      uVar3 = FUN_01524bf0(lVar5);
      *param_3 = uVar3;
      uVar3 = FUN_01524c00(lVar5);
      bVar2 = true;
      bVar1 = true;
      *param_4 = uVar3;
      goto joined_r0x00c3a0e4;
    }
    goto joined_r0x00c39f94;
  }
  plVar4 = (long *)*plVar4;
  goto joined_r0x00c39f78;
joined_r0x00c39f94:
  bVar2 = false;
  bVar1 = false;
joined_r0x00c3a0e4:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    bVar1 = bVar2;
  }
  if (bVar1) {
    return;
  }
LAB_00c39fb8:
  *param_1 = 0;
  return;
}



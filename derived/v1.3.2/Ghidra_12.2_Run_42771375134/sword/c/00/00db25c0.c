/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db25c0; name: FUN_00db25c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00db25c0(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  (**(code **)(*param_3 + 0x10))(&local_48,param_3);
  if (*(long *)(param_2 + 0x198) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x198) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x198) = 0;
  }
  puVar1 = PTR_DAT_02710848;
  *(long *)(param_2 + 0x198) = local_48;
  FUN_00c58c00(&local_58,*(undefined8 *)(*(long *)puVar1 + 0x78));
  lVar8 = local_58;
  local_68 = *(long *)(param_2 + 0x198);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_00c7a1d0(&local_60,lVar8,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x198) + 0x60);
  uVar3 = FUN_0156b540(lVar8);
  lVar8 = lVar8 + -0x50;
  if ((uVar3 & 1) == 0) {
    lVar8 = 0;
  }
  lVar4 = FUN_00c750c0(&local_48,*(undefined8 *)(lVar8 + 8));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_48 = lVar4;
  FUN_006d9640(lVar8,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_60 == 0) {
LAB_00db27e4:
    lVar8 = *(long *)(param_2 + 0x188);
  }
  else {
    puVar9 = *(undefined8 **)(local_60 + 0x60);
    if (puVar9 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(**(code **)*puVar9)(puVar9);
      if (((*PTR_DAT_02715b80 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715b80), iVar2 != 0)) {
        uVar7 = FUN_00727dd0();
        *(undefined8 *)PTR_DAT_02715b88 = uVar7;
        __cxa_guard_release(PTR_DAT_02715b80);
      }
      if (puVar5 == (undefined8 *)0x0) goto LAB_00db27e4;
      do {
        if (puVar5 == (undefined8 *)PTR_DAT_02715b88) {
          puVar9 = puVar9 + -10;
          lVar8 = *(long *)(param_2 + 0x188);
          goto joined_r0x00db27a4;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
    }
    lVar8 = *(long *)(param_2 + 0x188);
  }
  puVar9 = (undefined8 *)0x0;
joined_r0x00db27a4:
  if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715b80 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715b80), iVar2 != 0)) {
      uVar7 = FUN_00727dd0();
      *(undefined8 *)PTR_DAT_02715b88 = uVar7;
      __cxa_guard_release(PTR_DAT_02715b80);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_02715b88) {
        puVar5 = puVar5 + -10;
        goto LAB_00db27f4;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00db27f4:
  FUN_006dbb10(lVar4,puVar9,param_4,puVar5,param_5);
  if ((*(long *)(param_2 + 0x188) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_2 + 0x188) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715b80 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715b80), iVar2 != 0)) {
      uVar7 = FUN_00727dd0();
      *(undefined8 *)PTR_DAT_02715b88 = uVar7;
      __cxa_guard_release(PTR_DAT_02715b80);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_02715b88) {
        puVar9 = puVar9 + -10;
        goto LAB_00db285c;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_00db285c:
  local_48 = 0;
  FUN_007273c0(puVar9,1,&local_48);
  *(undefined1 *)(param_2 + 0x1a0) = 1;
  lVar8 = *(long *)(lVar4 + 0x58);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  *param_1 = lVar8;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}



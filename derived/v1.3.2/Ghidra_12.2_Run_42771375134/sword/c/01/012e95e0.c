/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e95e0; name: FUN_012e95e0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_012e95e0(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  code *pcVar10;
  uint uVar11;
  long *local_68;
  
  puVar9 = (undefined1 *)(param_1 + 0x510);
  if (*(ulong *)(param_1 + 0x518) == param_2) {
LAB_012e9ae8:
    bVar3 = true;
    *puVar9 = 1;
    FUN_0130f9a0(&local_68,param_1);
    plVar4 = local_68;
  }
  else {
    puVar9 = (undefined1 *)(param_1 + 0x520);
    if (*(ulong *)(param_1 + 0x528) == param_2) goto LAB_012e9ae8;
    if (*(ulong *)(param_1 + 0x538) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x530);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x548) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x540);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x558) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x550);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x568) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x560);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x578) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x570);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x588) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x580);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x598) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x590);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x5a8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x5a0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x5b8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x5b0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x5c8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x5c0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x5d8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x5d0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x5e8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x5e0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x5f8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x5f0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x608) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x600);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x618) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x610);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x628) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x620);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x638) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x630);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x648) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x640);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x658) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x650);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x668) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x660);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x678) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x670);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x688) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x680);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x698) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x690);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x6a8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x6a0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x6b8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x6b0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x6c8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x6c0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x6d8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x6d0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x6e8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x6e0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x6f8) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x6f0);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x708) == param_2) {
      puVar9 = (undefined1 *)(param_1 + 0x700);
      goto LAB_012e9ae8;
    }
    if (*(ulong *)(param_1 + 0x518) == 0) {
      puVar1 = (ulong *)(param_1 + 0x518);
      *(undefined1 *)(param_1 + 0x510) = 1;
joined_r0x012e9d98:
      if (param_2 != 0) {
        (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
      }
      uVar8 = *puVar1;
      *puVar1 = param_2;
      if (uVar8 != 0) {
        (**(code **)(*(long *)(uVar8 + 0x48) + 0x18))();
      }
    }
    else {
      if (*(ulong *)(param_1 + 0x528) == 0) {
        puVar1 = (ulong *)(param_1 + 0x528);
        *puVar9 = 1;
        goto joined_r0x012e9d98;
      }
      if (*(ulong *)(param_1 + 0x538) == 0) {
        puVar1 = (ulong *)(param_1 + 0x538);
        *(undefined1 *)(param_1 + 0x530) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(ulong *)(param_1 + 0x548) == 0) {
        puVar1 = (ulong *)(param_1 + 0x548);
        *(undefined1 *)(param_1 + 0x540) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x558) == 0) {
        puVar1 = (ulong *)(param_1 + 0x558);
        *(undefined1 *)(param_1 + 0x550) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x568) == 0) {
        puVar1 = (ulong *)(param_1 + 0x568);
        *(undefined1 *)(param_1 + 0x560) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x578) == 0) {
        puVar1 = (ulong *)(param_1 + 0x578);
        *(undefined1 *)(param_1 + 0x570) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x588) == 0) {
        puVar1 = (ulong *)(param_1 + 0x588);
        *(undefined1 *)(param_1 + 0x580) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x598) == 0) {
        puVar1 = (ulong *)(param_1 + 0x598);
        *(undefined1 *)(param_1 + 0x590) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x5a8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x5a8);
        *(undefined1 *)(param_1 + 0x5a0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x5b8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x5b8);
        *(undefined1 *)(param_1 + 0x5b0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x5c8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x5c8);
        *(undefined1 *)(param_1 + 0x5c0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x5d8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x5d8);
        *(undefined1 *)(param_1 + 0x5d0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x5e8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x5e8);
        *(undefined1 *)(param_1 + 0x5e0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x5f8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x5f8);
        *(undefined1 *)(param_1 + 0x5f0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x608) == 0) {
        puVar1 = (ulong *)(param_1 + 0x608);
        *(undefined1 *)(param_1 + 0x600) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x618) == 0) {
        puVar1 = (ulong *)(param_1 + 0x618);
        *(undefined1 *)(param_1 + 0x610) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x628) == 0) {
        puVar1 = (ulong *)(param_1 + 0x628);
        *(undefined1 *)(param_1 + 0x620) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x638) == 0) {
        puVar1 = (ulong *)(param_1 + 0x638);
        *(undefined1 *)(param_1 + 0x630) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x648) == 0) {
        puVar1 = (ulong *)(param_1 + 0x648);
        *(undefined1 *)(param_1 + 0x640) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x658) == 0) {
        puVar1 = (ulong *)(param_1 + 0x658);
        *(undefined1 *)(param_1 + 0x650) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x668) == 0) {
        puVar1 = (ulong *)(param_1 + 0x668);
        *(undefined1 *)(param_1 + 0x660) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x678) == 0) {
        puVar1 = (ulong *)(param_1 + 0x678);
        *(undefined1 *)(param_1 + 0x670) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x688) == 0) {
        puVar1 = (ulong *)(param_1 + 0x688);
        *(undefined1 *)(param_1 + 0x680) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x698) == 0) {
        puVar1 = (ulong *)(param_1 + 0x698);
        *(undefined1 *)(param_1 + 0x690) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x6a8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x6a8);
        *(undefined1 *)(param_1 + 0x6a0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x6b8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x6b8);
        *(undefined1 *)(param_1 + 0x6b0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x6c8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x6c8);
        *(undefined1 *)(param_1 + 0x6c0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x6d8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x6d8);
        *(undefined1 *)(param_1 + 0x6d0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x6e8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x6e8);
        *(undefined1 *)(param_1 + 0x6e0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x6f8) == 0) {
        puVar1 = (ulong *)(param_1 + 0x6f8);
        *(undefined1 *)(param_1 + 0x6f0) = 1;
        goto joined_r0x012e9d98;
      }
      if (*(long *)(param_1 + 0x708) == 0) {
        puVar1 = (ulong *)(param_1 + 0x708);
        *(undefined1 *)(param_1 + 0x700) = 1;
        goto joined_r0x012e9d98;
      }
    }
    bVar3 = false;
    FUN_0130f9a0(&local_68,param_1);
    plVar4 = local_68;
  }
  if (plVar4 != (long *)0x0) {
    local_68 = plVar4;
    plVar6 = (long *)(**(code **)plVar4[10])(plVar4 + 10);
    if (((*PTR_DAT_02727ab8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02727ab8), iVar5 != 0)) {
      uVar7 = FUN_012ec770();
      *(undefined8 *)PTR_DAT_02727ac0 = uVar7;
      __cxa_guard_release(PTR_DAT_02727ab8);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_02727ac0) {
        if (bVar3) {
          pcVar10 = *(code **)(*plVar4 + 0x60);
        }
        else {
          pcVar10 = *(code **)(*plVar4 + 0x58);
        }
        param_2 = (*pcVar10)(plVar4,param_2);
        param_2 = param_2 & 0xffffffff;
        uVar2 = true;
        goto joined_r0x012e9bb0;
      }
    }
    uVar2 = false;
joined_r0x012e9bb0:
    if (local_68 != (long *)0x0) {
      (**(code **)(*(long *)((long)local_68 + 0x48) + 0x18))();
    }
    uVar11 = (uint)param_2;
    if ((bool)uVar2) goto LAB_012e9b60;
  }
  uVar11 = 1;
LAB_012e9b60:
  return uVar11 & 1;
}



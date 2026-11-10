/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfd500; name: FUN_00dfd500
 */


void FUN_00dfd500(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *local_28;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  FUN_00dfda80();
  puVar7 = PTR_DAT_0271ee58;
  puVar6 = PTR_DAT_0271ee50;
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_00a658b0(&local_28,param_1 + 0x50);
    (**(code **)(*local_28 + 0x180))(local_28,0);
    *(undefined1 *)(local_28 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x140) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x170) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x1a0) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x1d0) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x200) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x230) = 0xcbf29ce484222645;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0xcbf29ce484222645;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x308) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x310) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x318) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 800) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x328) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x330) = 0xcbf29ce484222645;
    *(undefined8 *)(param_1 + 0x338) = 0xcbf29ce484222645;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x598) = 0;
    *(undefined8 *)(param_1 + 0x590) = 0;
    *(undefined8 *)(param_1 + 0x588) = 0;
    *(undefined8 *)(param_1 + 0x580) = 0;
    *(undefined8 *)(param_1 + 0x578) = 0;
    *(undefined8 *)(param_1 + 0x570) = 0;
    *(undefined8 *)(param_1 + 0x568) = 0;
    *(undefined8 *)(param_1 + 0x560) = 0;
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x550) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined8 *)(param_1 + 0x628) = 0;
    *(undefined8 *)(param_1 + 0x620) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined8 *)(param_1 + 0x5f8) = 0;
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5c8) = 0;
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(undefined8 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined8 *)(param_1 + 0x728) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined8 *)(param_1 + 0x708) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    if (local_28 != (long *)0x0) {
      (**(code **)(local_28[9] + 0x18))();
      local_28 = (long *)0x0;
      lVar10 = *(long *)(param_1 + 0x60);
      pbVar4 = PTR_DAT_0271ee60;
      puVar5 = (undefined8 *)PTR_DAT_0271ee68;
      goto joined_r0x00dfd924;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x58);
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
LAB_00dfd610:
      plVar12 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0x54);
      iVar11 = *(int *)(lVar10 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar10 + 0x58);
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            uVar9 = FUN_00a89c30();
            *(undefined8 *)puVar7 = uVar9;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00dfd610;
            if (plVar12 == (long *)puVar7) break;
            plVar12 = (long *)*plVar12;
          }
          iVar8 = *piVar1;
          if (iVar8 != iVar11) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar10 + 0x60) != 0) {
              plVar12 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
            }
            goto LAB_00dfd614;
          }
          plVar12 = (long *)0x0;
          iVar11 = iVar8;
          if (iVar8 == 0) goto LAB_00dfd614;
        }
        ClearExclusiveLocal();
        plVar12 = (long *)0x0;
        iVar11 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00dfd614:
    (**(code **)(*plVar12 + 0x180))(plVar12,0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
  }
  lVar10 = *(long *)(param_1 + 0x60);
  pbVar4 = PTR_DAT_0271ee60;
  puVar5 = (undefined8 *)PTR_DAT_0271ee68;
joined_r0x00dfd924:
  PTR_DAT_0271ee60 = pbVar4;
  PTR_DAT_0271ee68 = (undefined *)puVar5;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
LAB_00dfda0c:
    plVar12 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar11 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar10 + 0x58);
        if (((*pbVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar4), iVar8 != 0)) {
          uVar9 = FUN_00a89c30();
          *puVar5 = uVar9;
          __cxa_guard_release(pbVar4);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00dfda0c;
          if (plVar12 == puVar5) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 != iVar11) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar12 = (long *)0x0;
          if (*(long *)(lVar10 + 0x60) != 0) {
            plVar12 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
          }
          goto LAB_00dfda10;
        }
        plVar12 = (long *)0x0;
        iVar11 = iVar8;
        if (iVar8 == 0) goto LAB_00dfda10;
      }
      ClearExclusiveLocal();
      plVar12 = (long *)0x0;
      iVar11 = iVar8;
    } while (iVar8 != 0);
  }
LAB_00dfda10:
  (**(code **)(*plVar12 + 0x180))(plVar12,1);
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
  }
  *(undefined4 *)(param_1 + 0x6c) = 1;
  return;
}



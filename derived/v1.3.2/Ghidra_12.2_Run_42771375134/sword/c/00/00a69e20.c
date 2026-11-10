/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a69e20; name: FUN_00a69e20
 */


/* WARNING: Removing unreachable block (ram,0x00a6a41c) */
/* WARNING: Removing unreachable block (ram,0x00a6a3ec) */
/* WARNING: Removing unreachable block (ram,0x00a6a404) */
/* WARNING: Removing unreachable block (ram,0x00a6a434) */

void FUN_00a69e20(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar5 == 0) {
    FUN_0101cb00(0,&local_50);
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0101cb00(lVar5,&local_50);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  puVar2 = PTR_DAT_02710860;
  puVar6 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
  uVar3 = *puVar6;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar1 = (long)puVar6 + (ulong)uVar3;
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00aabd10(lVar4,param_1,param_2,&local_50,lVar1);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x510;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xba0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xba0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xba0) = 0;
    }
    *(long *)(param_1 + 0xba0) = lVar4;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
      if (lVar4 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_00aabd10(lVar4,param_1,param_2,&local_50,lVar1);
      *(long **)(lVar4 + 8) = param_2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x510;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xba8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xba8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xba8) = 0;
      }
      *(long *)(param_1 + 0xba8) = lVar4;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_00aabd10(lVar4,param_1,param_2,&local_50,lVar1);
        *(long **)(lVar4 + 8) = param_2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x510;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0xbb0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xbb0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xbb0) = 0;
        }
        *(long *)(param_1 + 0xbb0) = lVar4;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (*(ulong *)(lVar5 + 0x80) < 0x10) {
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
          if (lVar4 == 0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_00aabd10(lVar4,param_1,param_2,&local_50,lVar1);
          *(long **)(lVar4 + 8) = param_2;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x510;
          *(undefined8 *)(lVar4 + 0x20) = 0x10;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 3000) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 3000) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 3000) = 0;
          }
          *(long *)(param_1 + 3000) = lVar4;
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (*(ulong *)(lVar5 + 0x80) < 0x10) {
            *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
            if (lVar4 == 0) {
              (**(code **)(*param_2 + 0xb8))(param_2);
            }
            FUN_00aabd10(lVar4,param_1,param_2,&local_50,lVar1);
            *(long **)(lVar4 + 8) = param_2;
            *(long *)(lVar4 + 0x10) = lVar4;
            *(undefined8 *)(lVar4 + 0x18) = 0x510;
            *(undefined8 *)(lVar4 + 0x20) = 0x10;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0xbc0) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0xbc0) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0xbc0) = 0;
            }
            *(long *)(param_1 + 0xbc0) = lVar4;
            uVar3 = FUN_00aa5730(param_1 + 0x3d0);
            *(uint *)(param_1 + 0xbc8) = uVar3;
            if (uVar3 == 0x10) {
LAB_00a6a460:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (uVar3 < 0x10) {
              uVar8 = *(undefined8 *)(param_1 + (ulong)uVar3 * 0x20 + 0xb8);
              FUN_00aabe60(*(undefined8 *)(param_1 + 0xba0),uVar8,0x68c3754f4bf8081a,
                           0x445fc19ff275f218,0xcbf29ce484222645);
              FUN_00aabe60(*(undefined8 *)(param_1 + 0xba8),uVar8,0x68c3754f4bf8081a,
                           0x445fc49ff275f731,0xcbf29ce484222645);
              uVar3 = FUN_00aa5730(param_1 + 0x3d0);
              *(uint *)(param_1 + 0xbcc) = uVar3;
              if (uVar3 == 0x10) goto LAB_00a6a460;
              if (uVar3 < 0x10) {
                uVar8 = *(undefined8 *)(param_1 + (ulong)uVar3 * 0x20 + 0xb8);
                FUN_00aabe60(*(undefined8 *)(param_1 + 0xbb0),uVar8,0x68c3754f4bf8081a,
                             0x445fc39ff275f57e,0xcbf29ce484222645);
                FUN_00aabe60(*(undefined8 *)(param_1 + 3000),uVar8,0x68c3754f4bf8081a,
                             0x445fc69ff275fa97,0xcbf29ce484222645);
                FUN_00aabe60(*(undefined8 *)(param_1 + 0xbc0),uVar8,0x68c3754f4bf8081a,
                             0xcc4fe041ac9e3a01,0xcbf29ce484222645);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



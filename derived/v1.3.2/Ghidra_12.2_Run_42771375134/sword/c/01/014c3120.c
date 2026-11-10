/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c3120; name: FUN_014c3120
 */


void FUN_014c3120(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = FUN_0077d470(*param_4);
  iVar2 = FUN_0077d480(*param_4);
  puVar1 = PTR_DAT_02710820;
  if (iVar2 != 0) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(*(long *)puVar1 + (long)param_5 * 0x20 + 0x1c0);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar4 = FUN_014c47c0(lVar7);
      uVar5 = FUN_01995600(*(undefined8 *)(lVar4 + 0x10),*(undefined2 *)(lVar3 + uVar8 * 2),
                           *(undefined2 *)(lVar4 + 0x32));
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      if ((uVar5 & 1) == 0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0x80,8);
        if (lVar4 == 0) {
          (**(code **)(*param_3 + 0xb8))(param_3);
        }
        FUN_0077d050(lVar4,2);
        *(long **)(lVar4 + 8) = param_3;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x80;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        *param_1 = lVar4;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        iVar2 = FUN_0077d480(*param_4);
        if (iVar2 == 0) {
          return;
        }
        uVar8 = 0;
        while( true ) {
          lVar7 = *(long *)(*(long *)puVar1 + (long)param_5 * 0x20 + 0x1c0);
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          lVar6 = FUN_014c47c0(lVar7);
          uVar5 = FUN_01995600(*(undefined8 *)(lVar6 + 0x10),*(undefined2 *)(lVar3 + uVar8 * 2),
                               *(undefined2 *)(lVar6 + 0x32));
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
          }
          if ((uVar5 & 1) == 0) break;
          uVar8 = uVar8 + 1;
          uVar5 = FUN_0077d480(*param_4);
          if ((uVar5 & 0xffffffff) <= uVar8) {
            return;
          }
        }
        FUN_0077d5c0(lVar4,*(undefined2 *)(lVar3 + uVar8 * 2));
        return;
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_0077d480(*param_4);
    } while (uVar8 < (uVar5 & 0xffffffff));
  }
  *param_1 = 0;
  return;
}



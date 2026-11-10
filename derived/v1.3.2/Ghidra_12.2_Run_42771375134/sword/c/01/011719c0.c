/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011719c0; name: FUN_011719c0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_011719c0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  if ((*(char *)(param_1 + 0x90) != '\0') && (*(long *)(param_1 + 0xa0) != 0)) {
    iVar4 = FUN_009ff9e0();
    iVar5 = FUN_009ffa10(*(undefined8 *)(param_1 + 0xa0));
    iVar6 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0xa0),0xc);
    if ((*(long *)(param_1 + 0xb0) != 0) &&
       (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + 0x60), puVar12 != (undefined8 *)0x0))
    {
      plVar8 = (long *)(**(code **)*puVar12)(puVar12);
      puVar2 = PTR_DAT_02724f60;
      puVar1 = (undefined8 *)PTR_DAT_02724f68;
      if (((*PTR_DAT_02724f60 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_02724f60), puVar1 = (undefined8 *)PTR_DAT_02724f68,
         iVar7 != 0)) {
        uVar11 = FUN_009b7e90();
        *(undefined8 *)PTR_DAT_02724f68 = uVar11;
        __cxa_guard_release(PTR_DAT_02724f60);
        puVar1 = (undefined8 *)PTR_DAT_02724f68;
      }
      for (; PTR_DAT_02724f68 = (undefined *)puVar1, plVar8 != (long *)0x0; plVar8 = (long *)*plVar8
          ) {
        if (plVar8 == puVar1) {
          plVar8 = *(long **)(param_1 + 0x80);
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (*(ulong *)(lVar9 + 0x80) < 0x10) {
            *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,400,0x10);
            if (lVar10 == 0) {
              (**(code **)(*plVar8 + 0xb8))(plVar8);
            }
            FUN_009fe380(lVar10,*(undefined8 *)(param_1 + 0x80));
            *(long **)(lVar10 + 8) = plVar8;
            *(long *)(lVar10 + 0x10) = lVar10;
            *(undefined8 *)(lVar10 + 0x18) = 400;
            *(undefined8 *)(lVar10 + 0x20) = 0x10;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            if (lVar10 != 0) {
              (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
            }
            FUN_009fe680(lVar10,puVar12 + 7);
            iVar7 = FUN_009ff9e0(lVar10);
            if ((iVar4 == iVar7) && (iVar7 = FUN_009ffa10(lVar10), iVar5 == iVar7)) {
              iVar7 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0xa0),0xc);
              bVar3 = iVar6 != iVar7;
            }
            else {
              bVar3 = true;
            }
            if (lVar10 != 0) {
              (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
            }
            if (bVar3) {
              return false;
            }
            if (*(long *)(param_1 + 0xb8) == 0) {
              return false;
            }
            puVar12 = *(undefined8 **)(*(long *)(param_1 + 0xb8) + 0x60);
            if (puVar12 == (undefined8 *)0x0) {
              return false;
            }
            plVar8 = (long *)(**(code **)*puVar12)(puVar12);
            if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_02724f60), iVar7 != 0))
            {
              uVar11 = FUN_009b7e90();
              *puVar1 = uVar11;
              __cxa_guard_release(PTR_DAT_02724f60);
            }
            while( true ) {
              if (plVar8 == (long *)0x0) {
                return false;
              }
              if (plVar8 == puVar1) break;
              plVar8 = (long *)*plVar8;
            }
            plVar8 = *(long **)(param_1 + 0x80);
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (*(ulong *)(lVar9 + 0x80) < 0x10) {
              *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,400,0x10);
              if (lVar10 == 0) {
                (**(code **)(*plVar8 + 0xb8))(plVar8);
              }
              FUN_009fe380(lVar10,*(undefined8 *)(param_1 + 0x80));
              *(long **)(lVar10 + 8) = plVar8;
              *(long *)(lVar10 + 0x10) = lVar10;
              *(undefined8 *)(lVar10 + 0x18) = 400;
              *(undefined8 *)(lVar10 + 0x20) = 0x10;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              if (lVar10 != 0) {
                (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
              }
              FUN_009fe680(lVar10,puVar12 + 7);
              iVar7 = FUN_009ff9e0(lVar10);
              if ((iVar4 == iVar7) && (iVar4 = FUN_009ffa10(lVar10), iVar5 == iVar4)) {
                iVar4 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0xa0),0xc);
                bVar3 = iVar6 != iVar4;
              }
              else {
                bVar3 = true;
              }
              if (lVar10 != 0) {
                (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
              }
              return !bVar3;
            }
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
    }
  }
  return false;
}



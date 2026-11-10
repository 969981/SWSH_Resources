/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b8800; name: FUN_011b8800
 */


uint FUN_011b8800(long param_1,undefined8 param_2,ushort param_3)

{
  byte *pbVar1;
  uint *puVar2;
  ushort *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  byte *pbVar14;
  
  uVar7 = FUN_011b8150();
  if (((uVar7 & 0xff) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + (uVar7 >> 0x1d & 0x7fffffff8)) + 0x58), lVar11 == 0)) {
    uVar9 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))((long *)(lVar11 + 0x48));
    if (*(uint *)(lVar11 + 0x54) != 0) {
      puVar2 = (uint *)(lVar11 + 0x54);
      uVar9 = *(uint *)(lVar11 + 0x54);
LAB_011b885c:
      do {
        plVar13 = *(long **)(lVar11 + 0x58);
        lVar8 = FUN_011b8d50();
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_011b8940;
          if (plVar13 == (long *)lVar8) break;
          plVar13 = (long *)*plVar13;
        }
        uVar12 = *puVar2;
        if (uVar12 != uVar9) goto LAB_011b88a0;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar8 = *(long *)(lVar11 + 0x60);
          if (lVar8 != 0) {
            pbVar14 = *(byte **)(lVar8 + 0x10);
            if ((pbVar14 == (byte *)0x0) || (*(uint *)(pbVar14 + 0x10) == 0)) {
LAB_011b896c:
              uVar12 = 0;
            }
            else {
              puVar3 = (ushort *)(pbVar14 + *(uint *)(pbVar14 + 0x10));
              uVar9 = 0;
              if (puVar3 == (ushort *)0x0) goto LAB_011b896c;
              if (*(uint *)(pbVar14 + 0xc) < 6) {
                uVar7 = *(ulong *)(&DAT_021676e0 + (long)(int)*(uint *)(pbVar14 + 0xc) * 8);
                FUN_0075def0();
                uVar9 = 0;
                lVar10 = -(uVar7 & 0xfffffffffffffffe);
                do {
                  bVar4 = *pbVar14;
                  pbVar1 = pbVar14 + 1;
                  pbVar14 = pbVar14 + 2;
                  uVar9 = (uint)(ushort)(*(ushort *)
                                          (PTR_DAT_02715fd8 +
                                          ((ulong)((uint)*pbVar1 ^
                                                  (uint)*(ushort *)
                                                         (PTR_DAT_02715fd8 +
                                                         ((ulong)(bVar4 ^ uVar9) & 0xff) * 2) ^
                                                  uVar9 >> 8) & 0xff) * 2) ^
                                        *(ushort *)
                                         (PTR_DAT_02715fd8 + ((ulong)(bVar4 ^ uVar9) & 0xff) * 2) >>
                                        8);
                  lVar10 = lVar10 + 2;
                } while (lVar10 != 0);
              }
              else {
                FUN_0075def0();
                uVar9 = 0;
              }
              if ((uVar9 == param_3) && (*puVar3 == param_3)) {
                uVar9 = 1;
              }
              else {
                uVar9 = 0;
              }
              uVar12 = 1;
            }
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
            uVar9 = uVar9 & uVar12;
            goto LAB_011b8944;
          }
          break;
        }
        uVar9 = uVar12;
      } while (uVar12 != 0);
    }
LAB_011b8940:
    uVar9 = 0;
LAB_011b8944:
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return uVar9;
LAB_011b88a0:
  ClearExclusiveLocal();
  uVar9 = uVar12;
  if (uVar12 == 0) goto LAB_011b8940;
  goto LAB_011b885c;
}



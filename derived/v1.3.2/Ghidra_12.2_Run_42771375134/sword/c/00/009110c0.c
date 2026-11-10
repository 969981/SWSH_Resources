/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009110c0; name: FUN_009110c0
 */


/* WARNING: Removing unreachable block (ram,0x009112cc) */
/* WARNING: Removing unreachable block (ram,0x0091119c) */
/* WARNING: Removing unreachable block (ram,0x00911104) */
/* WARNING: Removing unreachable block (ram,0x00911234) */
/* WARNING: Removing unreachable block (ram,0x00911364) */

void FUN_009110c0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_009c50b0();
    pbVar2 = (byte *)FUN_00915240();
    bVar1 = *pbVar2;
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0) {
      pbVar2 = pbVar2 + 8;
      if (bVar1 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        puVar5 = (undefined8 *)(param_1 + 0x4f8);
        do {
          puVar5[-1] = *(undefined8 *)pbVar2;
          *(char *)(param_1 + 0x5e0) = *(char *)(param_1 + 0x5e0) + '\x01';
          *puVar5 = *(undefined8 *)(pbVar2 + 8);
          lVar3 = lVar3 + 2;
          pbVar2 = pbVar2 + 0x10;
          *(char *)(param_1 + 0x5e0) = *(char *)(param_1 + 0x5e0) + '\x01';
          puVar5 = puVar5 + 2;
        } while (uVar4 - (uVar4 & 1) != lVar3);
        if ((bVar1 & 1) == 0) goto LAB_00911168;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x4f0) = *(undefined8 *)pbVar2;
      *(char *)(param_1 + 0x5e0) = *(char *)(param_1 + 0x5e0) + '\x01';
    }
  }
LAB_00911168:
  *(undefined1 *)(param_1 + 0x5e1) = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_009c50b0();
    pbVar2 = (byte *)FUN_00915240();
    bVar1 = *pbVar2;
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0) {
      pbVar2 = pbVar2 + 8;
      if (bVar1 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        puVar5 = (undefined8 *)(param_1 + 0x528);
        do {
          puVar5[-1] = *(undefined8 *)pbVar2;
          *(char *)(param_1 + 0x5e1) = *(char *)(param_1 + 0x5e1) + '\x01';
          *puVar5 = *(undefined8 *)(pbVar2 + 8);
          lVar3 = lVar3 + 2;
          pbVar2 = pbVar2 + 0x10;
          *(char *)(param_1 + 0x5e1) = *(char *)(param_1 + 0x5e1) + '\x01';
          puVar5 = puVar5 + 2;
        } while (uVar4 - (uVar4 & 1) != lVar3);
        if ((bVar1 & 1) == 0) goto LAB_00911200;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x520) = *(undefined8 *)pbVar2;
      *(char *)(param_1 + 0x5e1) = *(char *)(param_1 + 0x5e1) + '\x01';
    }
  }
LAB_00911200:
  *(undefined1 *)(param_1 + 0x5e2) = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_009c50b0();
    pbVar2 = (byte *)FUN_00915240();
    bVar1 = *pbVar2;
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0) {
      pbVar2 = pbVar2 + 8;
      if (bVar1 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        puVar5 = (undefined8 *)(param_1 + 0x558);
        do {
          puVar5[-1] = *(undefined8 *)pbVar2;
          *(char *)(param_1 + 0x5e2) = *(char *)(param_1 + 0x5e2) + '\x01';
          *puVar5 = *(undefined8 *)(pbVar2 + 8);
          lVar3 = lVar3 + 2;
          pbVar2 = pbVar2 + 0x10;
          *(char *)(param_1 + 0x5e2) = *(char *)(param_1 + 0x5e2) + '\x01';
          puVar5 = puVar5 + 2;
        } while (uVar4 - (uVar4 & 1) != lVar3);
        if ((bVar1 & 1) == 0) goto LAB_00911298;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x550) = *(undefined8 *)pbVar2;
      *(char *)(param_1 + 0x5e2) = *(char *)(param_1 + 0x5e2) + '\x01';
    }
  }
LAB_00911298:
  *(undefined1 *)(param_1 + 0x5e3) = 0;
  if (*(long *)(param_1 + 200) != 0) {
    FUN_009c50b0();
    pbVar2 = (byte *)FUN_00915240();
    bVar1 = *pbVar2;
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0) {
      pbVar2 = pbVar2 + 8;
      if (bVar1 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        puVar5 = (undefined8 *)(param_1 + 0x588);
        do {
          puVar5[-1] = *(undefined8 *)pbVar2;
          *(char *)(param_1 + 0x5e3) = *(char *)(param_1 + 0x5e3) + '\x01';
          *puVar5 = *(undefined8 *)(pbVar2 + 8);
          lVar3 = lVar3 + 2;
          pbVar2 = pbVar2 + 0x10;
          *(char *)(param_1 + 0x5e3) = *(char *)(param_1 + 0x5e3) + '\x01';
          puVar5 = puVar5 + 2;
        } while (uVar4 - (uVar4 & 1) != lVar3);
        if ((bVar1 & 1) == 0) goto LAB_00911330;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x580) = *(undefined8 *)pbVar2;
      *(char *)(param_1 + 0x5e3) = *(char *)(param_1 + 0x5e3) + '\x01';
    }
  }
LAB_00911330:
  *(undefined1 *)(param_1 + 0x5e4) = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_009c50b0();
    pbVar2 = (byte *)FUN_00915240();
    bVar1 = *pbVar2;
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0) {
      pbVar2 = pbVar2 + 8;
      if (bVar1 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        puVar5 = (undefined8 *)(param_1 + 0x5b8);
        do {
          puVar5[-1] = *(undefined8 *)pbVar2;
          *(char *)(param_1 + 0x5e4) = *(char *)(param_1 + 0x5e4) + '\x01';
          *puVar5 = *(undefined8 *)(pbVar2 + 8);
          lVar3 = lVar3 + 2;
          pbVar2 = pbVar2 + 0x10;
          *(char *)(param_1 + 0x5e4) = *(char *)(param_1 + 0x5e4) + '\x01';
          puVar5 = puVar5 + 2;
        } while (uVar4 - (uVar4 & 1) != lVar3);
        if ((bVar1 & 1) == 0) {
          return;
        }
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x5b0) = *(undefined8 *)pbVar2;
      *(char *)(param_1 + 0x5e4) = *(char *)(param_1 + 0x5e4) + '\x01';
    }
  }
  return;
}



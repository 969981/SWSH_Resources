/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d1480; name: FUN_001d1480
 */


void FUN_001d1480(long param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long local_288;
  undefined1 auStack_280 [512];
  undefined1 local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined8 *local_68;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar11 = 0;
    do {
      local_78 = auStack_280;
      plVar9 = *(long **)(*(long *)(param_2 + 8) + uVar11 * 8);
      uVar3 = *(uint *)(plVar9 + 1);
      if (2 < uVar3 >> 0x1e) {
        *(uint *)((long)plVar9 + 0x11c) = *(uint *)((long)plVar9 + 0x11c) & 0xf9ffffff;
        if ((*(byte *)((long)plVar9 +
                      *(long *)(PTR_DAT_02711068 + (ulong)(uVar3 >> 0x18 & 0xf) * 8 + 0x30) + 0xc)
             >> 3 & 1) == 0) {
          local_70 = 0x4000000000;
          local_80 = 1;
          puVar1 = local_78;
          if (*(long *)(param_1 + 0x1180) != 0) {
            puVar1 = (undefined1 *)(*(long *)(param_1 + 0x1180) + 0x218);
          }
                    /* try { // try from 001d1540 to 001d1543 has its CatchHandler @ 001d179c */
          FUN_00206d30();
                    /* try { // try from 001d1548 to 001d154f has its CatchHandler @ 001d177c */
          FUN_003d9790(plVar9 + 4);
                    /* try { // try from 001d1554 to 001d1563 has its CatchHandler @ 001d175c */
          FUN_003e8210(param_1 + 0x10,plVar9 + 4,puVar1,uVar3 >> 4 & 1);
          uVar3 = *(uint *)(puVar1 + 0x210);
          if (uVar3 != 0) {
            lVar6 = *plVar9;
            lVar12 = *(long *)(puVar1 + 0x208);
            uVar8 = 0;
            do {
              lVar7 = *(long *)(lVar12 + uVar8 * 8);
              uVar5 = *(uint *)(lVar7 + -0x18);
              puVar10 = (undefined8 *)(lVar7 + -0x20);
              if ((uVar5 >> 0x1c & 1) != 0) {
                    /* try { // try from 001d1594 to 001d15d7 has its CatchHandler @ 001d17fc */
                FUN_001e4d30(puVar10);
                local_68 = puVar10;
                FUN_001d6940(lVar6 + 0x1fe8,&local_68);
                uVar5 = *(uint *)(lVar7 + -0x18) & 0xefffffff;
                *(uint *)(lVar7 + -0x18) = uVar5;
              }
              if ((uVar5 & 0xf000000) == 0x1000000) {
                *(uint *)(lVar7 + -0x18) = uVar5 & 0x3fffffff;
                *(undefined8 *)(lVar7 + -0x20) = 0;
              }
              FUN_00206d50(puVar10);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar3);
          }
          puVar1 = local_78;
          if (((long)local_70 < 0) || ((local_70 & 0x7fffffff00000000) == 0)) goto LAB_001d1704;
          if (auStack_280 != local_78) {
            if (local_78 != (undefined1 *)0x0) {
                    /* try { // try from 001d160c to 001d161f has its CatchHandler @ 001d1744 */
              plVar4 = (long *)FUN_00400d30();
              (**(code **)(*plVar4 + 0x18))(plVar4,puVar1);
            }
            goto LAB_001d1704;
          }
LAB_001d14c8:
          local_80 = 0;
          bVar2 = *(byte *)((long)plVar9 + 0xb);
        }
        else {
          local_70 = 0x4000000000;
          local_80 = 1;
                    /* try { // try from 001d1638 to 001d163f has its CatchHandler @ 001d178c */
          lVar6 = FUN_00206d30();
                    /* try { // try from 001d1644 to 001d1647 has its CatchHandler @ 001d176c */
          FUN_003d9790(plVar9 + 4);
                    /* try { // try from 001d1648 to 001d1653 has its CatchHandler @ 001d174c */
          uVar3 = FUN_001f0560(plVar9,&local_288);
          if (uVar3 != 0) {
            lVar12 = *plVar9;
            uVar8 = 0;
            do {
              puVar10 = (undefined8 *)(*(long *)(local_288 + uVar8 * 8) + lVar6 + -0x20);
              uVar5 = *(uint *)(puVar10 + 1);
              if ((uVar5 >> 0x1c & 1) != 0) {
                    /* try { // try from 001d1684 to 001d169b has its CatchHandler @ 001d17ac */
                FUN_001e4d30(puVar10);
                local_68 = puVar10;
                FUN_001d6940(lVar12 + 0x1fe8,&local_68);
                uVar5 = *(uint *)(puVar10 + 1) & 0xefffffff;
                *(uint *)(puVar10 + 1) = uVar5;
              }
              if ((uVar5 & 0xf000000) == 0x1000000) {
                *(uint *)(puVar10 + 1) = uVar5 & 0x3fffffff;
                *puVar10 = 0;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar3);
          }
          puVar1 = local_78;
          if ((-1 < (long)local_70) && ((local_70 & 0x7fffffff00000000) != 0)) {
            if (auStack_280 == local_78) goto LAB_001d14c8;
            if (local_78 != (undefined1 *)0x0) {
                    /* try { // try from 001d16f0 to 001d1703 has its CatchHandler @ 001d1748 */
              plVar4 = (long *)FUN_00400d30();
              (**(code **)(*plVar4 + 0x18))(plVar4,puVar1);
            }
          }
LAB_001d1704:
          bVar2 = *(byte *)((long)plVar9 + 0xb);
        }
        if ((bVar2 >> 4 & 1) == 0) {
          FUN_001d0330(plVar9);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_2 + 0x34));
  }
  return;
}



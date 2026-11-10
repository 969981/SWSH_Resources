/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cff30; name: FUN_001cff30
 */


void FUN_001cff30(long param_1,long param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long local_280;
  undefined1 auStack_278 [512];
  undefined1 local_78;
  undefined1 *local_70;
  ulong local_68;
  
  puVar2 = PTR_DAT_02711068;
  if (*(int *)(param_2 + 0x34) == 0) {
    return;
  }
  lVar12 = *(long *)(param_2 + 8);
  uVar11 = 0;
LAB_001cff84:
  puVar8 = *(undefined8 **)(lVar12 + uVar11 * 8);
  uVar4 = *(uint *)(puVar8 + 1);
  if (uVar4 >> 0x1e == 1) {
    pbVar1 = (byte *)((long)puVar8 +
                     *(long *)(puVar2 + (ulong)(uVar4 >> 0x18 & 0xf) * 8 + 0x30) + 0xc);
    if ((uVar4 & 1) != 0) {
      pbVar1 = (byte *)puVar8[2];
    }
    local_70 = auStack_278;
    if ((*pbVar1 >> 3 & 1) != 0) {
      local_68 = 0x4000000000;
      local_78 = 1;
                    /* try { // try from 001d00cc to 001d00d3 has its CatchHandler @ 001d026c */
      lVar5 = FUN_00206d30();
                    /* try { // try from 001d00d8 to 001d00db has its CatchHandler @ 001d024c */
      FUN_003d9790(puVar8 + 4);
                    /* try { // try from 001d00dc to 001d00e7 has its CatchHandler @ 001d023c */
      uVar10 = FUN_001f3be0(puVar8,&local_280);
      puVar3 = local_70;
      if ((int)uVar10 != 0) {
        uVar9 = *puVar8;
        lVar5 = lVar5 + -0x20;
        if ((int)uVar10 == 1) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            puVar8 = (undefined8 *)(*(long *)(local_280 + lVar7 * 8) + lVar5);
            if ((*(uint *)(puVar8 + 1) & 0xf000000) == 0x1000000) {
              *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0x3fffffff | 0x80000000;
              *puVar8 = uVar9;
            }
            puVar8 = (undefined8 *)(*(long *)(local_280 + lVar7 * 8 + 8) + lVar5);
            if ((*(uint *)(puVar8 + 1) & 0xf000000) == 0x1000000) {
              *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0x3fffffff | 0x80000000;
              *puVar8 = uVar9;
            }
            lVar7 = lVar7 + 2;
          } while ((uVar10 & 0xffffffff) - (uVar10 & 1) != lVar7);
        }
        if ((uVar10 & 1) != 0) {
          puVar8 = (undefined8 *)(*(long *)(local_280 + lVar7 * 8) + lVar5);
          if ((*(uint *)(puVar8 + 1) & 0xf000000) == 0x1000000) {
            *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0x3fffffff | 0x80000000;
            *puVar8 = uVar9;
          }
        }
      }
      if (((long)local_68 < 0) || ((local_68 & 0x7fffffff00000000) == 0)) goto LAB_001d00ac;
      if (auStack_278 != local_70) {
        if (local_70 != (undefined1 *)0x0) {
                    /* try { // try from 001d01d0 to 001d01e3 has its CatchHandler @ 001d0238 */
          plVar6 = (long *)FUN_00400d30();
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar3);
        }
        goto LAB_001d00ac;
      }
      local_78 = 0;
      uVar11 = uVar11 + 1;
      if (*(uint *)(param_2 + 0x34) <= uVar11) {
        return;
      }
      goto LAB_001cff84;
    }
    local_68 = 0x4000000000;
    local_78 = 1;
                    /* try { // try from 001cffcc to 001cffd3 has its CatchHandler @ 001d02bc */
    lVar5 = FUN_00206d30();
                    /* try { // try from 001cffd8 to 001cffdf has its CatchHandler @ 001d025c */
    FUN_003d9790(puVar8 + 4);
                    /* try { // try from 001cffe0 to 001d000b has its CatchHandler @ 001d02cc */
    uVar4 = FUN_001f3be0(puVar8,&local_280);
    FUN_003e7b70(param_1 + 0x10,puVar8 + 4,local_280,uVar4,lVar5,0);
    if (uVar4 != 0) {
      uVar9 = *puVar8;
      uVar10 = 0;
      do {
        puVar8 = (undefined8 *)(*(long *)(local_280 + uVar10 * 8) + lVar5 + -0x20);
        if ((*(uint *)(puVar8 + 1) & 0xf000000) == 0x1000000) {
          *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0x3fffffff | 0x80000000;
          *puVar8 = uVar9;
        }
                    /* try { // try from 001d004c to 001d004f has its CatchHandler @ 001d02dc */
        FUN_00206d40();
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
    }
    puVar3 = local_70;
    if ((-1 < (long)local_68) && ((local_68 & 0x7fffffff00000000) != 0)) {
      if (auStack_278 != local_70) {
        if (local_70 != (undefined1 *)0x0) {
                    /* try { // try from 001d0088 to 001d009b has its CatchHandler @ 001d0234 */
          plVar6 = (long *)FUN_00400d30();
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar3);
        }
        goto LAB_001d00ac;
      }
      local_78 = 0;
      uVar11 = uVar11 + 1;
      if (*(uint *)(param_2 + 0x34) <= uVar11) {
        return;
      }
      goto LAB_001cff84;
    }
  }
  else if ((uVar4 >> 0x1c & 1) != 0) {
    FUN_001d7b00(puVar8);
  }
LAB_001d00ac:
  uVar11 = uVar11 + 1;
  if (*(uint *)(param_2 + 0x34) <= uVar11) {
    return;
  }
  goto LAB_001cff84;
}



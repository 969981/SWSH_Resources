/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d10a0; name: FUN_001d10a0
 */


void FUN_001d10a0(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long local_288;
  undefined1 auStack_280 [512];
  undefined1 local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined8 *local_68;
  
  puVar2 = PTR_DAT_02711068;
  if (*(int *)(param_2 + 0x34) == 0) {
    return;
  }
  uVar9 = 0;
LAB_001d10ec:
  local_78 = auStack_280;
  plVar7 = *(long **)(*(long *)(param_2 + 8) + uVar9 * 8);
  uVar3 = *(uint *)(plVar7 + 1);
  if (2 < uVar3 >> 0x1e) {
    if ((*(byte *)((long)plVar7 + *(long *)(puVar2 + (ulong)(uVar3 >> 0x18 & 0xf) * 8 + 0x30) + 0xc)
         >> 3 & 1) != 0) {
      local_70 = 0x4000000000;
      local_80 = 1;
                    /* try { // try from 001d1240 to 001d1247 has its CatchHandler @ 001d13b4 */
      lVar5 = FUN_00206d30();
                    /* try { // try from 001d124c to 001d124f has its CatchHandler @ 001d1394 */
      FUN_003d9790(plVar7 + 4);
                    /* try { // try from 001d1250 to 001d125b has its CatchHandler @ 001d1374 */
      uVar3 = FUN_001f3be0(plVar7,&local_288);
      if (uVar3 != 0) {
        lVar6 = *plVar7;
        uVar11 = 0;
        do {
          puVar8 = (undefined8 *)(*(long *)(local_288 + uVar11 * 8) + lVar5 + -0x20);
          uVar4 = *(uint *)(puVar8 + 1);
          if ((uVar4 >> 0x1c & 1) != 0) {
                    /* try { // try from 001d128c to 001d12a3 has its CatchHandler @ 001d13d4 */
            FUN_001e4d30(puVar8);
            local_68 = puVar8;
            FUN_001d6940(lVar6 + 0x1fe8,&local_68);
            uVar4 = *(uint *)(puVar8 + 1) & 0xefffffff;
            *(uint *)(puVar8 + 1) = uVar4;
          }
          if ((uVar4 & 0xf000000) == 0x1000000) {
            *(uint *)(puVar8 + 1) = uVar4 & 0x3fffffff;
            *puVar8 = 0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar3);
      }
      puVar1 = local_78;
      if (((long)local_70 < 0) || ((local_70 & 0x7fffffff00000000) == 0)) goto LAB_001d130c;
      if (auStack_280 != local_78) {
        if (local_78 != (undefined1 *)0x0) {
                    /* try { // try from 001d12f8 to 001d130b has its CatchHandler @ 001d1370 */
          plVar7 = (long *)FUN_00400d30();
          (**(code **)(*plVar7 + 0x18))(plVar7,puVar1);
        }
        goto LAB_001d130c;
      }
      uVar9 = uVar9 + 1;
      if (*(uint *)(param_2 + 0x34) <= uVar9) {
        return;
      }
      goto LAB_001d10ec;
    }
    local_70 = 0x4000000000;
    local_80 = 1;
    puVar1 = local_78;
    if (*(long *)(param_1 + 0x1180) != 0) {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x1180) + 0x218);
    }
                    /* try { // try from 001d1140 to 001d1143 has its CatchHandler @ 001d13c4 */
    FUN_00206d30();
                    /* try { // try from 001d1148 to 001d114f has its CatchHandler @ 001d13a4 */
    FUN_003d9790(plVar7 + 4);
                    /* try { // try from 001d1154 to 001d1163 has its CatchHandler @ 001d1384 */
    FUN_003e7e60(param_1 + 0x10,plVar7 + 4,puVar1,uVar3 >> 4 & 1);
    uVar3 = *(uint *)(puVar1 + 0x210);
    if (uVar3 != 0) {
      lVar5 = *plVar7;
      lVar6 = *(long *)(puVar1 + 0x208);
      uVar11 = 0;
      do {
        lVar10 = *(long *)(lVar6 + uVar11 * 8);
        uVar4 = *(uint *)(lVar10 + -0x18);
        puVar8 = (undefined8 *)(lVar10 + -0x20);
        if ((uVar4 >> 0x1c & 1) != 0) {
                    /* try { // try from 001d1198 to 001d11db has its CatchHandler @ 001d1424 */
          FUN_001e4d30(puVar8);
          local_68 = puVar8;
          FUN_001d6940(lVar5 + 0x1fe8,&local_68);
          uVar4 = *(uint *)(lVar10 + -0x18) & 0xefffffff;
          *(uint *)(lVar10 + -0x18) = uVar4;
        }
        if ((uVar4 & 0xf000000) == 0x1000000) {
          *(uint *)(lVar10 + -0x18) = uVar4 & 0x3fffffff;
          *(undefined8 *)(lVar10 + -0x20) = 0;
        }
        FUN_00206d50(puVar8);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar3);
    }
    puVar1 = local_78;
    if ((-1 < (long)local_70) && ((local_70 & 0x7fffffff00000000) != 0)) {
      if (auStack_280 != local_78) {
        if (local_78 != (undefined1 *)0x0) {
                    /* try { // try from 001d1214 to 001d1227 has its CatchHandler @ 001d136c */
          plVar7 = (long *)FUN_00400d30();
          (**(code **)(*plVar7 + 0x18))(plVar7,puVar1);
        }
        goto LAB_001d130c;
      }
      uVar9 = uVar9 + 1;
      if (*(uint *)(param_2 + 0x34) <= uVar9) {
        return;
      }
      goto LAB_001d10ec;
    }
  }
LAB_001d130c:
  uVar9 = uVar9 + 1;
  if (*(uint *)(param_2 + 0x34) <= uVar9) {
    return;
  }
  goto LAB_001d10ec;
}



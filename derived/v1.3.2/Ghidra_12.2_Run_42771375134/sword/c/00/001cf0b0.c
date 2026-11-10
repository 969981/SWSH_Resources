/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cf0b0; name: FUN_001cf0b0
 */


void FUN_001cf0b0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_58 [8];
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1fb0));
  if (*(int *)(param_1 + 0x1fa8) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    plVar1 = (long *)(param_1 + 0x10);
    do {
      puVar7 = (uint *)(*(long *)(param_1 + 0x1fa0) + lVar8);
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      if (uVar4 == 2) {
        if ((uVar3 < *(uint *)(param_1 + 0x18)) &&
           (puVar7 = (uint *)(*plVar1 + (ulong)uVar3 * 0x20 + 0x18), *puVar7 == uVar3)) {
                    /* try { // try from 001cf1a4 to 001cf1ab has its CatchHandler @ 001cf250 */
          FUN_003ebc80(plVar1);
          *puVar7 = 0xffffffff;
        }
      }
      else {
        lVar6 = *(long *)(param_2 + (ulong)uVar3 * 8);
        if (uVar4 == 1) {
          if (lVar6 != 0) {
            puVar2 = (undefined8 *)(*plVar1 + (ulong)*(uint *)(lVar6 + 0x48) * 0x20);
            uVar5 = *(undefined4 *)(lVar6 + 0x38);
            *puVar2 = *(undefined8 *)(lVar6 + 0x30);
            *(undefined4 *)(puVar2 + 1) = uVar5;
            *(undefined2 *)((long)puVar2 + 0xc) = *(undefined2 *)(lVar6 + 0x3c);
            *(undefined2 *)((long)puVar2 + 0xe) = *(undefined2 *)(lVar6 + 0x3e);
            *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar6 + 0x48);
            puVar2[2] = *(undefined8 *)(lVar6 + 0x40);
                    /* try { // try from 001cf1f4 to 001cf1ff has its CatchHandler @ 001cf254 */
            FUN_003ebc60(plVar1,(undefined8 *)(lVar6 + 0x30));
          }
        }
        else if (uVar4 == 0 && lVar6 != 0) {
          uVar3 = *(uint *)(lVar6 + 0x48);
                    /* try { // try from 001cf130 to 001cf17b has its CatchHandler @ 001cf258 */
          FUN_001d6100(plVar1,uVar3 + 1);
          puVar2 = (undefined8 *)(*plVar1 + (ulong)uVar3 * 0x20);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar6 + 0x38);
          *puVar2 = *(undefined8 *)(lVar6 + 0x30);
          *(undefined2 *)((long)puVar2 + 0xc) = *(undefined2 *)(lVar6 + 0x3c);
          *(undefined2 *)((long)puVar2 + 0xe) = *(undefined2 *)(lVar6 + 0x3e);
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar6 + 0x48);
          puVar2[2] = *(undefined8 *)(lVar6 + 0x40);
          FUN_003ebc40(plVar1);
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while (uVar9 < *(uint *)(param_1 + 0x1fa8));
  }
                    /* try { // try from 001cf214 to 001cf223 has its CatchHandler @ 001cf24c */
  FUN_001cf270((long *)(param_1 + 0x1fa0),0,auStack_58);
                    /* try { // try from 001cf228 to 001cf22b has its CatchHandler @ 001cf248 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fb0));
  return;
}



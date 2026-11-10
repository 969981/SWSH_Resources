/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00204b10; name: FUN_00204b10
 */


void FUN_00204b10(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float fVar9;
  
  if ((char)param_1[1] != '\0') {
    puVar2 = (undefined8 *)*param_1;
    uVar3 = *(uint *)((long)puVar2 + 0x54);
    uVar4 = (ulong)uVar3;
    if (*(char *)(puVar2 + 8) != '\0') {
      if (uVar3 == 0) goto LAB_00204c0c;
      fVar9 = *(float *)(puVar2 + 7);
      lVar6 = puVar2[9];
      uVar5 = 0;
      do {
        while( true ) {
          uVar3 = (uint)uVar4;
          pfVar7 = (float *)(lVar6 + uVar5 * 0x38 + 0x30);
          if (*pfVar7 <= fVar9) break;
          uVar3 = uVar3 - 1;
          uVar4 = (ulong)uVar3;
          puVar8 = (undefined8 *)(lVar6 + uVar4 * 0x38);
          puVar2 = (undefined8 *)(lVar6 + uVar5 * 0x38);
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar8 + 2);
          puVar2[1] = puVar8[1];
          *puVar2 = *puVar8;
          *(undefined2 *)((long)puVar2 + 0x14) = *(undefined2 *)((long)puVar8 + 0x14);
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar8 + 3);
          *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar8 + 4);
          *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar8 + 0x24);
          *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar8 + 5);
          *(undefined4 *)((long)puVar2 + 0x2c) = *(undefined4 *)((long)puVar8 + 0x2c);
          *pfVar7 = *(float *)(puVar8 + 6);
          *(undefined4 *)((long)puVar2 + 0x34) = *(undefined4 *)((long)puVar8 + 0x34);
          if ((uint)uVar5 == uVar3) goto LAB_00204be4;
        }
        uVar1 = (uint)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != uVar3);
LAB_00204be4:
      puVar2 = (undefined8 *)*param_1;
      *(uint *)((long)puVar2 + 0x54) = uVar3;
    }
                    /* try { // try from 00204bfc to 00204bff has its CatchHandler @ 00204c28 */
    if ((uVar3 != 0) && (uVar4 = (**(code **)*puVar2)(puVar2,puVar2[9]), (uVar4 & 1) != 0)) {
      *(undefined4 *)(*param_1 + 0x54) = 0;
    }
  }
LAB_00204c0c:
                    /* try { // try from 00204c18 to 00204c1b has its CatchHandler @ 00204c2c */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}



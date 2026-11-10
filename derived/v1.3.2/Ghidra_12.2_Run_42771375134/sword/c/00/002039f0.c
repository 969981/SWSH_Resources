/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002039f0; name: FUN_002039f0
 */


void FUN_002039f0(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  if ((char)param_1[1] != '\0') {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = *(uint *)((long)puVar3 + 0x5c);
    uVar5 = (ulong)uVar4;
    if (*(char *)(puVar3 + 9) != '\0') {
      if (uVar4 == 0) goto LAB_00203ae8;
      fVar8 = *(float *)(puVar3 + 7);
      lVar7 = puVar3[10];
      uVar6 = 0;
      do {
        while( true ) {
          uVar4 = (uint)uVar5;
          puVar3 = (undefined8 *)(lVar7 + uVar6 * 0x40);
          if (*(float *)(puVar3 + 6) <= fVar8) break;
          uVar4 = uVar4 - 1;
          uVar5 = (ulong)uVar4;
          puVar2 = (undefined8 *)(lVar7 + uVar5 * 0x40);
          *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
          puVar3[1] = puVar2[1];
          *puVar3 = *puVar2;
          *(undefined2 *)((long)puVar3 + 0x14) = *(undefined2 *)((long)puVar2 + 0x14);
          *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 3);
          *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x1c);
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar2 + 4);
          *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)((long)puVar2 + 0x24);
          *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar2 + 5);
          *(undefined4 *)((long)puVar3 + 0x2c) = *(undefined4 *)((long)puVar2 + 0x2c);
          *(float *)(puVar3 + 6) = *(float *)(puVar2 + 6);
          *(undefined8 *)((long)puVar3 + 0x34) = *(undefined8 *)((long)puVar2 + 0x34);
          if ((uint)uVar6 == uVar4) goto LAB_00203ac0;
        }
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 != uVar4);
LAB_00203ac0:
      puVar3 = (undefined8 *)*param_1;
      *(uint *)((long)puVar3 + 0x5c) = uVar4;
    }
                    /* try { // try from 00203ad8 to 00203adb has its CatchHandler @ 00203b04 */
    if ((uVar4 != 0) && (uVar5 = (**(code **)*puVar3)(puVar3,puVar3[10]), (uVar5 & 1) != 0)) {
      *(undefined4 *)(*param_1 + 0x5c) = 0;
    }
  }
LAB_00203ae8:
                    /* try { // try from 00203af4 to 00203af7 has its CatchHandler @ 00203b08 */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}



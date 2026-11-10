/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de1c0; name: FUN_003de1c0
 */


void FUN_003de1c0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_48;
  byte local_38 [8];
  
  *(int *)(param_1 + 0x7c4) = *(int *)(param_1 + 0x7c4) + 1;
  *(undefined1 *)(param_1 + 0x1ed8) = 0;
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(*(long *)(param_1 + 0x1118) + 0x38);
  (**(code **)(*(long *)(*(long *)(param_1 + 0x720) + 0x120) + 0x58))
            (*(long *)(param_1 + 0x720) + 0x120);
  *(undefined4 *)(param_1 + 0x960) = 0;
  if (*(char *)(param_1 + 0x128c) != '\0') {
    fVar5 = (float)FUN_0011e990(*(undefined8 *)(param_1 + 0x720),7);
    if ((((fVar5 != 0.0) ||
         (fVar5 = (float)FUN_0011e990(*(undefined8 *)(param_1 + 0x720),8), fVar5 != 0.0)) ||
        (fVar5 = (float)FUN_0011e990(*(undefined8 *)(param_1 + 0x720),9), fVar5 != 0.0)) ||
       (fVar5 = (float)FUN_0011e990(*(undefined8 *)(param_1 + 0x720),10), fVar5 != 0.0)) {
      *(uint *)(param_1 + 0x1108) = *(uint *)(param_1 + 0x1108) | 4;
    }
    *(char *)(param_1 + 0x128c) = '\0';
  }
  uVar1 = *(uint *)(param_1 + 0x8dc);
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  if ((*(uint *)(param_1 + 0x8ec) & 0x7fffffff) < uVar1) {
    FUN_003f2f50(param_1 + 0x8e0);
    uVar1 = *(uint *)(param_1 + 0x8dc);
  }
  if (uVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x8b0);
    uVar3 = 0;
    do {
      while( true ) {
        uVar2 = *(undefined8 *)(lVar4 + uVar3 * 8);
        FUN_003a9b40(local_38,uVar2);
        if ((local_38[0] >> 2 & 1) != 0) break;
LAB_003de300:
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 0x8dc) <= uVar3) goto LAB_003de330;
      }
      local_48 = FUN_003a9980(uVar2);
      uVar1 = *(uint *)(param_1 + 0x8e8);
      if (uVar1 < (*(uint *)(param_1 + 0x8ec) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(param_1 + 0x8e0) + (ulong)uVar1 * 8) = local_48;
        *(uint *)(param_1 + 0x8e8) = uVar1 + 1;
        goto LAB_003de300;
      }
      FUN_003f30b0(param_1 + 0x8e0,&local_48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x8dc));
  }
LAB_003de330:
  FUN_003de360(param_1);
  FUN_0011ba10();
  return;
}



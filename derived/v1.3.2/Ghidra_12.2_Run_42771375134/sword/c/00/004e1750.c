/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e1750; name: FUN_004e1750
 */


void FUN_004e1750(float param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 8) != 0) {
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_004e2750(lVar1,&local_40,param_3);
      lVar1 = lVar2;
    } while (lVar2 != 0);
    if (local_38 != 0) {
      lVar1 = local_38;
      do {
        fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0xc));
        fVar3 = (1.0 / param_1) * fVar3;
        fVar4 = 0.5;
        if (fVar3 <= 0.0) {
          fVar4 = -0.5;
        }
        *(int *)(lVar1 + 0xc) = (int)(fVar4 + fVar3);
        lVar1 = *(long *)(lVar1 + 0x18);
      } while (lVar1 != 0);
    }
  }
  FUN_004c2ff0(param_2,&local_40,param_3);
  return;
}



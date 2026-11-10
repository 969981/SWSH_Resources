/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00461b20; name: FUN_00461b20
 */


void FUN_00461b20(long param_1)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  short *psVar7;
  short *psVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float local_64;
  
  plVar5 = (long *)(**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x38))();
  if ((plVar5 != (long *)0x0) && ((int)plVar5[1] != 0)) {
    uVar1 = *(uint *)(param_1 + 0x50);
    psVar8 = (short *)*plVar5;
    if (uVar1 == 0) {
      do {
        cVar2 = (char)psVar8[1];
        sVar3 = *psVar8;
        fVar11 = 1.0;
        if (cVar2 != '\x03') {
          fVar11 = 0.0;
        }
        local_64 = fVar11;
        uVar6 = FUN_00462210(param_1,sVar3,cVar2,&local_64);
        if ((cVar2 == '\x04') && ((uVar6 & 1) != 0)) {
          local_64 = local_64 - fVar11;
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),sVar3,&local_64,4);
        psVar8 = psVar8 + 2;
      } while (psVar8 != (short *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 4));
    }
    else {
      do {
        cVar2 = (char)psVar8[1];
        local_64 = 1.0;
        if (cVar2 != '\x03') {
          local_64 = 0.0;
        }
        sVar3 = *psVar8;
        bVar9 = false;
        psVar7 = (short *)(*(long *)(param_1 + 0x48) + 8);
        if (cVar2 != '\x03') {
          fVar11 = 0.0;
          fVar10 = 0.0;
          uVar6 = (ulong)uVar1;
          do {
            if (*psVar7 == sVar3) {
              local_64 = fVar11 + *(float *)(psVar7 + 2);
              fVar11 = *(float *)(psVar7 + 2);
              if (*(int *)(psVar7 + -4) != 0) {
                fVar11 = fVar10;
              }
              fVar10 = fVar11;
              bVar9 = (bool)(bVar9 | *(int *)(psVar7 + -4) != 0);
              fVar11 = local_64;
            }
            psVar7 = psVar7 + 8;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        else {
          fVar11 = 1.0;
          fVar10 = 1.0;
          uVar6 = (ulong)uVar1;
          do {
            if (*psVar7 == sVar3) {
              local_64 = fVar11 * *(float *)(psVar7 + 2);
              fVar11 = *(float *)(psVar7 + 2);
              if (*(int *)(psVar7 + -4) != 0) {
                fVar11 = fVar10;
              }
              fVar10 = fVar11;
              bVar9 = (bool)(bVar9 | *(int *)(psVar7 + -4) != 0);
              fVar11 = local_64;
            }
            psVar7 = psVar7 + 8;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar4 = FUN_00462210(param_1,sVar3,cVar2,&local_64);
        if ((cVar2 == '\x04') && (bVar9 || (uVar4 & 1) != 0)) {
          local_64 = local_64 - fVar10;
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),sVar3,&local_64,4);
        psVar8 = psVar8 + 2;
      } while (psVar8 != (short *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 4));
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00152410; name: FUN_00152410
 */


void FUN_00152410(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = DAT_01d4c18c;
  fVar3 = DAT_01d4c18c;
  fVar6 = DAT_01d4c18c;
  fVar4 = DAT_01d4c5a8;
  fVar1 = DAT_01d4c5a8;
  fVar5 = DAT_01d4c5a8;
  if (param_2 != param_3) {
    do {
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      param_2 = param_2 + 4;
      if (fVar7 <= fVar2) {
        fVar2 = fVar7;
      }
      if (fVar8 <= fVar6) {
        fVar6 = fVar8;
      }
      if (fVar9 <= fVar3) {
        fVar3 = fVar9;
      }
      if (fVar4 <= fVar7) {
        fVar4 = fVar7;
      }
      if (fVar5 <= fVar8) {
        fVar5 = fVar8;
      }
      if (fVar1 <= fVar9) {
        fVar1 = fVar9;
      }
    } while (param_2 != param_3);
  }
  *(undefined8 *)(param_1 + 0x9c) = 0x4120000042700000;
  *(undefined8 *)(param_1 + 0xac) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x80) = 0x3f8000003f800000;
  *(float *)(param_1 + 0x44) = (fVar1 - fVar3) * 0.5;
  *(float *)(param_1 + 0x30) = (fVar4 + fVar2) * 0.5;
  *(float *)(param_1 + 0x34) = (fVar5 + fVar6) * 0.5;
  *(undefined8 *)(param_1 + 0x88) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x90) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 0x3c) = (fVar4 - fVar2) * 0.5;
  *(float *)(param_1 + 0x40) = (fVar5 - fVar6) * 0.5;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(float *)(param_1 + 0x38) = (fVar1 + fVar3) * 0.5;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x1e00000000;
  *(undefined8 *)(param_1 + 0x148) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x150) = 0xc3000000;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0x3f800000c3000000;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x254) = 0xc300000000000000;
  *(undefined8 *)(param_1 + 0x280) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  return;
}



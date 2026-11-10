/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00912ee0; name: FUN_00912ee0
 */


void FUN_00912ee0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined8 *)((long)param_1 + 0x35) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x2f) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x27) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x1f) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x72) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 100) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xaf) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xa9) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xa1) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x99) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xec) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xe6) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xde) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0xd6) = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined8 *)((long)param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x8a) = 0;
  *(undefined8 *)((long)param_1 + 0x82) = 0;
  *(undefined8 *)((long)param_1 + 0x7a) = 0;
  *(undefined8 *)((long)param_1 + 0xce) = 0;
  *(undefined8 *)((long)param_1 + 199) = 0;
  *(undefined8 *)((long)param_1 + 0xbf) = 0;
  *(undefined8 *)((long)param_1 + 0xb7) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = 0;
  do {
    uVar2 = FUN_008df400(param_2,uVar3 & 0xffffffff);
    if ((uVar2 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      FUN_008df3f0(param_2,uVar3 & 0xffffffff);
      bVar1 = FUN_008e1600();
      bVar1 = bVar1 & 1;
    }
    uVar2 = uVar3 + 1;
    *(byte *)((long)param_1 + uVar3 + 0xf4) = bVar1;
    *(undefined1 *)((long)param_1 + uVar3 + 0x112) = 0;
    uVar3 = uVar2;
  } while (uVar2 != 0x1e);
  param_1[0x26] = 0x1f1f1f1f1f1f1f1f;
  param_1[0x27] = 0x1f1f1f1f1f1f1f1f;
  param_1[0x28] = 0x1f1f1f1f1f1f1f1f;
  *(undefined8 *)((long)param_1 + 0x146) = 0x1f1f1f1f1f1f1f1f;
  *(undefined1 *)((long)param_1 + 0x14e) = 0;
  return;
}



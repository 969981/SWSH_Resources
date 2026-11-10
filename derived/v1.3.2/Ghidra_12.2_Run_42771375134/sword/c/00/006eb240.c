/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006eb240; name: FUN_006eb240
 */


void FUN_006eb240(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar4;
  puVar2 = PTR_DAT_02715648;
  *PTR_DAT_02715640 = 1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar2 + 0x40);
  param_1[10] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb2f0:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb2f0;
  }
  param_1[0xd] = lVar3;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb324:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb324;
  }
  param_1[0x13] = lVar3;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb358:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb358;
  }
  param_1[0x19] = lVar3;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_006cee90((long)param_1 + 0xec,1,0);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb3a0:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb3a0;
  }
  param_1[0x23] = lVar3;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb3d4:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb3d4;
  }
  param_1[0x29] = lVar3;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb408:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb408;
  }
  param_1[0x2f] = lVar3;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb43c:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb43c;
  }
  param_1[0x35] = lVar3;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb470:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb470;
  }
  param_1[0x3b] = lVar3;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb4a4:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb4a4;
  }
  param_1[0x41] = lVar3;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb4e0:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb4e0;
  }
  param_1[0x47] = lVar3;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb51c:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb51c;
  }
  param_1[0x4d] = lVar3;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb558:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb558;
  }
  param_1[0x53] = lVar3;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb594:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb594;
  }
  param_1[0x59] = lVar3;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb5d0:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb5d0;
  }
  param_1[0x5f] = lVar3;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb60c:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb60c;
  }
  param_1[0x65] = lVar3;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb648:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb648;
  }
  param_1[0x6b] = lVar3;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb684:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb684;
  }
  param_1[0x71] = lVar3;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_006eb6c0:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_006eb6c0;
  }
  param_1[0x77] = lVar3;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_006eb700;
  }
  lVar3 = FUN_0075ecb0();
LAB_006eb700:
  param_1[0x7d] = lVar3;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  FUN_006cee90((long)param_1 + 0x40c,1,0);
  param_1[0x83] = 0;
  FUN_006cee90((long)param_1 + 0x424,1,0);
  param_1[0x86] = 0;
  return;
}



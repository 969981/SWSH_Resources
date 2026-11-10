/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a8180; name: FUN_012a8180
 */


void FUN_012a8180(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar3;
  *PTR_DAT_027272d8 = 1;
  *(undefined4 *)(param_1 + 10) = 2;
  puVar1 = PTR_DAT_027272e0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x40);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar7 = param_1 + 0xf;
  *plVar7 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x12] = lVar3;
  param_1[0x13] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x15),true,0);
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 100),true,0);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x6b),true,0);
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x72),true,0);
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x79),true,0);
  if (param_2 <= (ulong)(param_1[0x11] - *plVar7 >> 5)) {
    return;
  }
  lVar3 = param_1[0x10] - *plVar7 >> 5;
  lVar2 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],param_2 << 5,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[0x12] + 0xb8))();
    puVar8 = (undefined8 *)*plVar7;
    puVar9 = (undefined8 *)param_1[0x10];
    puVar6 = (undefined8 *)(lVar3 * 0x20);
    if (puVar9 != puVar8) goto LAB_012a8358;
  }
  else {
    puVar8 = (undefined8 *)*plVar7;
    puVar9 = (undefined8 *)param_1[0x10];
    puVar6 = (undefined8 *)(lVar2 + lVar3 * 0x20);
    if (puVar9 != puVar8) {
LAB_012a8358:
      puVar1 = PTR_DAT_02710860;
      puVar10 = puVar6;
      do {
        lVar12 = param_1[0x12];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar4 = puVar9[-4];
        puVar9[-4] = 0;
        puVar11 = puVar10 + -4;
        *puVar11 = uVar4;
        uVar4 = puVar9[-3];
        uVar5 = puVar9[-1];
        puVar10[-2] = puVar9[-2];
        puVar10[-1] = uVar5;
        puVar10[-3] = uVar4;
        puVar9 = puVar9 + -4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar10 = puVar11;
      } while (puVar8 != puVar9);
      puVar8 = (undefined8 *)*plVar7;
      puVar9 = (undefined8 *)param_1[0x10];
      goto LAB_012a83f0;
    }
  }
  puVar9 = puVar8;
  puVar11 = puVar6;
LAB_012a83f0:
  lVar3 = param_1[0x11];
  *plVar7 = (long)puVar11;
  param_1[0x10] = (long)puVar6;
  param_1[0x11] = lVar2 + param_2 * 0x20;
  if (puVar9 != puVar8) {
    do {
      puVar10 = puVar9 + -4;
      puVar6 = (undefined8 *)*puVar10;
      *puVar10 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)puVar9[-3] + 0x18))((long *)puVar9[-3],puVar6,puVar9[-2],puVar9[-1]);
      }
      puVar9 = puVar10;
    } while (puVar8 != puVar10);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012a8480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x12] + 0x18))((long *)param_1[0x12],puVar8,lVar3 - (long)puVar8,8);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007201c0; name: FUN_007201c0
 */


void FUN_007201c0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_02710860;
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  do {
    uVar6 = *puVar4;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    puVar5[0x20] = 0;
    puVar5[0x21] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x19] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    *puVar5 = 0xcbf29ce484222645;
    puVar5[1] = &DAT_01d38550;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0xcbf29ce484222645;
    puVar5[5] = &DAT_01d38550;
    puVar5[6] = 0;
    puVar5[7] = 0;
    FUN_0075e2a0();
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
       (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
      lVar3 = FUN_0075ecb0();
    }
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    param_2 = param_2 + -1;
    puVar5[0x19] = 0;
    *(undefined4 *)(puVar5 + 0x1e) = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1c] = lVar3;
    puVar5[0x1d] = 0;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x110);
    *(undefined8 **)(param_1 + 0x10) = puVar5;
  } while (param_2 != 0);
  return;
}



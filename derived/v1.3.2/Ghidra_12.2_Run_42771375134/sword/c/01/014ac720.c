/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ac720; name: FUN_014ac720
 */


void FUN_014ac720(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)(param_2 + 0x30);
  lVar1 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0xf8,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*puVar3 + 0xb8))();
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar4 = *puVar3;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)*param_5;
  *(undefined8 *)(lVar1 + 0x18) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x20) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined1 **)(lVar1 + 0xe0) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x40) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x60) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0x80) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0xa0) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar1 + 0xc0) = &DAT_01d38550;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = 0;
  puVar3[1] = param_3;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e398c0; name: FUN_00e398c0
 */


void FUN_00e398c0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__src;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  
  pvVar9 = (void *)*param_1;
  if ((void *)param_1[1] == pvVar9) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    puVar1 = PTR_DAT_02715de0 + 0x10;
    puVar2 = PTR_DAT_02715de8 + 0x10;
    pvVar10 = (void *)param_1[1];
    do {
      lVar8 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
      __src = (void *)((long)pvVar10 + -0x210);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      memcpy((void *)(lVar7 + -0x210),__src,0x100);
      *(long *)(lVar7 + -0x110) = (long)puVar1;
      lVar8 = *(long *)((long)pvVar10 + -0x108);
      *(long *)(lVar7 + -0x108) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar7 + -0x100) = 0;
      *(undefined8 *)(lVar7 + -0xf0) = 0;
      *(undefined8 *)(lVar7 + -0xe8) = 0;
      *(undefined8 *)(lVar7 + -0xf8) = 0;
      if (*(code **)((long)pvVar10 + -0xf0) != (code *)0x0) {
        (**(code **)((long)pvVar10 + -0xf0))((long)pvVar10 + -0xe0,lVar7 + -0xe0);
        uVar3 = *(undefined8 *)((long)pvVar10 + -0x100);
        uVar4 = *(undefined8 *)((long)pvVar10 + -0xf8);
        uVar5 = *(undefined8 *)((long)pvVar10 + -0xe8);
        *(undefined8 *)(lVar7 + -0xf0) = *(undefined8 *)((long)pvVar10 + -0xf0);
        *(undefined8 *)(lVar7 + -0xe8) = uVar5;
        *(undefined8 *)(lVar7 + -0x100) = uVar3;
        *(undefined8 *)(lVar7 + -0xf8) = uVar4;
      }
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      if (*(code **)((long)pvVar10 + -0x70) != (code *)0x0) {
        (**(code **)((long)pvVar10 + -0x70))((long)pvVar10 + -0x60,lVar7 + -0x60);
        uVar3 = *(undefined8 *)((long)pvVar10 + -0x80);
        uVar4 = *(undefined8 *)((long)pvVar10 + -0x78);
        uVar5 = *(undefined8 *)((long)pvVar10 + -0x68);
        *(undefined8 *)(lVar7 + -0x70) = *(undefined8 *)((long)pvVar10 + -0x70);
        *(undefined8 *)(lVar7 + -0x68) = uVar5;
        *(undefined8 *)(lVar7 + -0x80) = uVar3;
        *(undefined8 *)(lVar7 + -0x78) = uVar4;
      }
      *(long *)(lVar7 + -0x110) = (long)puVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar7 = param_2[1] + -0x210;
      param_2[1] = lVar7;
      pvVar10 = __src;
    } while (pvVar9 != __src);
    pvVar9 = (void *)*param_1;
  }
  *param_1 = lVar7;
  param_2[1] = pvVar9;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}



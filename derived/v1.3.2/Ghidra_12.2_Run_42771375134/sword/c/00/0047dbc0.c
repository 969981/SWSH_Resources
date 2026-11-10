/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047dbc0; name: FUN_0047dbc0
 */


void FUN_0047dbc0(char *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t __n;
  void *__dest;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_02713248;
  if ((*(long *)PTR_DAT_02713248 == 0 && *PTR_DAT_02713258 == '\0') &&
     (__n = strlen(param_1), __n != 0)) {
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,__n + 2);
    *(void **)puVar3 = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__n);
      puVar4 = PTR_DAT_02713260;
      uVar1 = (int)__n - 1;
      *(uint *)PTR_DAT_02713260 = uVar1;
      while ((uVar1 != 0 && (param_1[uVar1] != '.'))) {
        uVar1 = uVar1 - 1;
        *(uint *)puVar4 = uVar1;
      }
      uVar5 = (ulong)uVar1;
      memcpy((void *)(*(long *)puVar3 + uVar5 + 1),param_1 + uVar5,__n - uVar5);
      *(undefined1 *)(*(long *)puVar3 + __n + 1) = 0;
      *(undefined1 *)(*(long *)puVar3 + (ulong)*(uint *)puVar4) = 0x30;
      puVar2 = PTR_DAT_02713240;
      for (lVar6 = *(long *)(PTR_DAT_02713240 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
        while( true ) {
          lVar8 = *(long *)(lVar6 + 0x10);
          plVar9 = (long *)(puVar2 + 0x10);
          do {
            plVar7 = (long *)*plVar9;
            plVar9 = plVar7 + 1;
            uVar5 = (**(code **)(*plVar7 + 0x60))(plVar7);
          } while ((uVar5 & 1) == 0);
          if (lVar8 != plVar7[2]) break;
          FUN_0047b010(lVar6,param_1);
          lVar6 = *(long *)(lVar6 + 8);
          if (lVar6 == 0) {
            return;
          }
        }
        *(char *)(*(long *)puVar3 + (ulong)*(uint *)puVar4) =
             *(char *)(*(long *)puVar3 + (ulong)*(uint *)puVar4) + '\x01';
        FUN_0047b010(lVar6,*(undefined8 *)puVar3);
      }
    }
  }
  return;
}



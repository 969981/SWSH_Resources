/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100030; name: _DT_INIT
 */


void _DT_INIT(void)

{
  undefined *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  if ((DAT_027360d0 == 0) &&
     (DAT_027360d0 = __nnmusl_init_dso(PTR_DAT_027103c0,PTR_DAT_027103c8,PTR_DAT_027103d0,
                                       PTR_DAT_027103e0,PTR_DAT_027103e8,PTR_DAT_02710400,
                                       PTR_DAT_02710408,PTR_DAT_02710410,PTR_DAT_027103f8,
                                       PTR_DAT_027103f0,PTR___DT_PLTGOT_027103b8,
                                       PTR___DT_INIT_ARRAY_027103d8,PTR___DT_RELA_027103b0,
                                       PTR___DT_JMPREL_027103a8,PTR___rel_dyn_start_027103a0,
                                       PTR___rel_dyn_end_02710398,PTR___DT_JMPREL_02710390,
                                       PTR___DT_HASH_02710388,PTR___rel_plt_start_02710380,
                                       PTR___rel_plt_end_02710378,PTR__DYNAMIC_02710370),
     DAT_027360d0 == 1)) {
    return;
  }
  puVar1 = PTR___DT_FINI_ARRAY_02710418;
  if (PTR___DT_INIT_ARRAY_02710420 < PTR___DT_FINI_ARRAY_02710418) {
    puVar2 = (undefined8 *)PTR___DT_INIT_ARRAY_02710420;
    do {
      puVar3 = puVar2 + 1;
      (*(code *)*puVar2)();
      puVar2 = puVar3;
    } while (puVar3 < puVar1);
  }
  return;
}



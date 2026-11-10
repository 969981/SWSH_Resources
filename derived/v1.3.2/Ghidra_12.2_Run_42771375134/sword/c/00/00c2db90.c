/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2db90; name: FUN_00c2db90
 */


void FUN_00c2db90(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *local_290;
  code *local_288;
  undefined1 *local_280;
  undefined1 *puStack_278;
  long *local_270;
  undefined4 local_268;
  long local_260;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  long *local_1f0;
  undefined4 local_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_190;
  char local_188 [272];
  long local_78;
  
  lVar4 = FUN_00c2cb20();
  if ((lVar4 == 0) || (FUN_00bdaa80(local_188), local_188[0] == '\0')) {
    *(undefined4 *)(param_1 + 0x14) = param_4;
  }
  else if (local_78 == 0) {
    *(undefined4 *)(param_1 + 0x14) = param_4;
  }
  else {
    if ((param_1[0xd] != 0) &&
       (puVar7 = *(undefined8 **)(param_1[0xd] + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_00be66c0();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) {
          FUN_00c1cce0(&local_210,puVar7 + -10);
          lVar4 = FUN_00be53f0(&local_210);
          if (local_210 != (undefined1 *)0x0) {
            (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
            local_210 = (undefined1 *)0x0;
          }
          if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
            (**(code **)(*param_1 + 0x10))(&local_190,param_1);
            lVar3 = local_190;
            if (local_190 == 0) {
              lVar8 = 0;
            }
            else {
              (**(code **)(*(long *)(local_190 + 0x48) + 0x10))();
              lVar8 = local_190;
              if (local_190 != 0) {
                (**(code **)(*(long *)(local_190 + 0x48) + 0x10))();
                bVar1 = false;
                goto LAB_00c2dcf8;
              }
            }
            bVar1 = true;
LAB_00c2dcf8:
            local_200 = (undefined1 *)0x0;
            puStack_1f8 = (undefined1 *)0x0;
            local_210 = (undefined1 *)0x0;
            local_208 = (code *)0x0;
            lStack_1d8 = lVar3;
            local_1f0 = param_1;
            local_1e8 = param_3;
            local_1e0 = lVar4;
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
            }
            local_210 = &LAB_00c2ff20;
            local_208 = FUN_00c30060;
            local_200 = &LAB_00c300a0;
            puStack_1f8 = &LAB_00c300d0;
            local_280 = (undefined1 *)0x0;
            puStack_278 = (undefined1 *)0x0;
            local_290 = (undefined1 *)0x0;
            local_288 = (code *)0x0;
            local_270 = param_1;
            local_268 = param_4;
            local_260 = lVar8;
            if (!bVar1) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            local_290 = &LAB_00c30100;
            local_288 = FUN_00c30130;
            local_280 = &LAB_00c30170;
            puStack_278 = &LAB_00c301a0;
            uVar6 = FUN_0122a470(local_78,&local_210,&local_290);
            pcVar2 = local_288;
            if (local_288 != (code *)0x0) {
              local_280 = (undefined1 *)0x0;
              puStack_278 = (undefined1 *)0x0;
              local_290 = (undefined1 *)0x0;
              local_288 = (code *)0x0;
              (*pcVar2)(&local_270);
            }
            pcVar2 = local_208;
            if (local_208 != (code *)0x0) {
              local_200 = (undefined1 *)0x0;
              puStack_1f8 = (undefined1 *)0x0;
              local_210 = (undefined1 *)0x0;
              local_208 = (code *)0x0;
              (*pcVar2)(&local_1f0);
            }
            if ((uVar6 & 1) == 0) {
              param_2 = param_4;
            }
            *(undefined4 *)(param_1 + 0x14) = param_2;
            if (!bVar1) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
            }
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
            }
            if (local_190 == 0) {
              return;
            }
            (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
            return;
          }
          break;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x14) = param_4;
  }
  return;
}



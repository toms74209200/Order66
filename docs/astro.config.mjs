import { defineConfig } from 'astro/config';

import mdx from "@astrojs/mdx";

// https://astro.build/config
export default defineConfig({
  integrations: [mdx()],
  base: "/Order66",
  site: "https://toms74209200.github.io/Order66/"
});